#include <iostream>
#include <vector>
using namespace std;
void CribaPrimos(int n, vector<bool>& primos);

int main()
{
	int numPrueba,a,b;
	cin >> numPrueba;
	
	for (int i = 0; i < numPrueba; i++)
	{
		cin >> a >> b;
		vector<bool>primos(b+1,true);
		primos[0] = primos[1] = false;
		int sum = 0;
		CribaPrimos(b + 1, primos);
		for (int j = a; j <= b; j++)
		{
			if (primos[j])
				sum += j;
		}
	cout << sum << endl;
	}	
	return 0;
}
void CribaPrimos(int n, vector<bool>& primos)
{
	for (int i = 2; i * i <= n; ++i)
	{
		if (primos[i])
		{
			for (int j = i * i; j <= n; j += i)
				primos[j] = false;
		}
	}
}
