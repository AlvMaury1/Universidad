#include <iostream>
#include <vector>
using namespace std;
void CribaPrimos(int n, vector<bool>& primos);

int main()
{
	int a,b;
	
	vector<bool>primos(9992,true);
	primos[0] = primos[1] = false;
	CribaPrimos(9992, primos);
	while (cin >> a >> b)
	{
		int maxNumber = 0;
		int maxDivisor = 0;
		for (int i = b; i >=a ; i--)
		{
			int divisores = 0;
			for (int j = 2; j <= i/2; j++)
			{
				if (i % j == 0 && primos[j])
					divisores++;
			}
			if (divisores > maxDivisor)
			{
				maxDivisor = divisores;
				maxNumber = i;
			}
		}
		printf("%d tiene %d divisores\n", maxNumber, maxDivisor);
	}
		
	return 0;
}
void CribaPrimos(int n, vector<bool>& primos)
{
	int i = 2;
	while ( i*i <= n)
	{
		if (primos[i])
		{
			for (int j = i * i; j <= n; j += i)
				primos[j] = false;
		}
		i++;

	}
}

