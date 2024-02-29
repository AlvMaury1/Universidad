#include <iostream>
#include <vector>
using namespace std;
int CribaPrimos(int n, vector<bool>& primos);

int main()
{
	int a,b;
	
	vector<bool>primos(314,true);
	primos[0] = primos[1] = false;
	while (cin >> a >> b)
	{
		int maxNumber = 0;
		int maxDivisor = 0;
		for (int i = b; i >=a ; i--)
		{
			int divisores = CribaPrimos(i, primos);
			if (divisores > maxDivisor)
			{
				maxNumber = i;
				maxDivisor = divisores;
			}
		}
		printf("%d tiene %d divisores\n", maxNumber, maxDivisor);
	}
		
	return 0;
}
int CribaPrimos(int n, vector<bool>& primos)
{
	int cont = 0;
	int i = 2;
	while ( i <= n/2)
	{
		if (primos[i])
		{
			for (int j = i * i; j <= n; j += i)
				primos[j] = false;
			if (n % i == 0) cont++;
		}
		i++;

	}
	return cont;
}

