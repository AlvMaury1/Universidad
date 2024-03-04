// PRIMOS EN UN RANGO
#include <vector>
#include <iostream>
using namespace std;
// First we created the Primes function
void CribaPrimos(int n, vector<bool>& primos);
 
int main()
{
	int a,b;
	int cont = 0;
	// To input we use the a and b, as a start and end.
	cin >> a >> b;
	// We created a vector with the size of b + 1, and initialize all the indexes to true  
	vector<bool>primos(b + 1, true);
	// then the 0 and 1 isnt primes so we change those to false
	primos[0] = primos[1] = false;
	
	CribaPrimos(b + 1, primos);
	// Then to count the false or trues we set a range and cout the trues
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
