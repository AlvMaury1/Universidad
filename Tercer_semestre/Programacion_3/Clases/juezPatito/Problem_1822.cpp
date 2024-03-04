// TRIPRIMOS
#include <iostream>
#include <cmath>
using namespace std;
void PrimosTri(long long n)
{
	int cont;
	long long k;
	cont = k = 0;
	
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			cont ++;
			k = i;
		}
	}
	if (cont == 1 && k*k == n)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}


int main()
{
	int a;
	long long k;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		cin >> k;
		PrimosTri(k);
	}
}
	
