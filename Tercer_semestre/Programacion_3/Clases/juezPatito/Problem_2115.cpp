#include <stdio.h>
#include <iostream>
using namespace std;
void CribaPrimos(int n, bool primos[]);

int main()
{
	int numPrueba, a, b, sum;
	const int limit = 100002; 
	bool primos[limit];
	fill_n(primos, limit, true);
	primos[0] = primos[1] = false;
	CribaPrimos(limit, primos);
	cin >> numPrueba;
	
	for (int i = 0; i < numPrueba; i++)
	{
		cin >> a >> b;
		sum = 0;
		for (int j = a; j <= b; j++)
		{
			if (primos[j])
				sum += j;
		}
		printf("%ld\n", sum);
	}	
	return 0;
}
void CribaPrimos(int n, bool primos[])
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
