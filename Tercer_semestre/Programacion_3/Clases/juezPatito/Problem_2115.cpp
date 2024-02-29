#include <stdio.h>
#include <iostream>
using namespace std;
void CribaPrimos(int n, long primos[]);

int main()
{
	long numPrueba, a, b, sum;
	long primos[100001]={true};
	primos[0] = primos[1] = false;
	CribaPrimos(100001, primos);
	for (int i = 0; i <= 10; i++)
	{
		printf("%b", primos[i]);
	}
	while(cin >> numPrueba)
	{
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
	}
	
	return 0;
}
void CribaPrimos(int n, long primos[])
{
	int i = 2;
	while (i * i <= n)
	{
		if (primos[i])
		{
			for (int j = i * i; j <= n; j += i)
				primos[j] = false;
		}
		i++;
	}
}
