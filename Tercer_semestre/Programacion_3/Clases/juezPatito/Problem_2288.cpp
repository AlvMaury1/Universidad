#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
void CribaPrimos(int n, vector<bool>& primos);
void fibonacci(int n, vector<long long> & fib);
bool PrimoCuadrado(long long n);
int main()
{
	const int limit = 100000;
	vector<bool>primos(limit + 1,true);
	primos[0] = primos[1] = false;
	CribaPrimos(limit, primos);
	
	const int maxFibo = 1000;
	vector<long long> fib(maxFibo + 1);
	fibonacci(maxFibo, fib);
	
	int a;
	while (cin >> a)
	{	
		long long fiboNumber = fib[a];
		if (0 <= a <= 51)
		{
			if (fiboNumber > limit)
				PrimoCuadrado(fiboNumber);
			else if (primos[fiboNumber])
				cout << "Es primo" << endl;
			else
				cout << "No es primo" << endl;
		}
		else
		{
			cout << fiboNumber << endl;
			//if(PrimoCuadrado(fiboNumber))
			//	cout << "Probablemente sea primo" << endl;
			//else
			//	cout << "No es primo" << endl;
		}
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
void fibonacci(int n, vector<long long> & fib)
{
const int MOD = 1000000007;
    fib[0] = 0;
    fib[1] = 1;
    fib[2] = 1;

    for (int i = 3; i <= n; ++i) {
        fib[i] = fib[i - 1] + fib[i - 2] % MOD;
    }
}

bool PrimoCuadrado(long long n)
{
	 
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n% i == 0)
			return false;
	}
	return true;
	
	
}
