#include <iostream>
#include <vector>
using namespace std;
void CribaPrimos(int n, vector<bool>& primos);

int main()
{
	int a,b;
	int cont = 0;
	cin >> a >> b;
	vector<bool>primos(b + 1,true);
	primos[0] = primos[1] = false;
	CribaPrimos(b+1, primos);
	for(int i = a; i <= b; i++)
		if (primos[i])cont++;
	cout << cont << endl;
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
