#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
	int a,b;
	while (cin >> a >> b)
	{
		vector<bool>multiplos(b + 1,true);
		int maxNumber = 0;
		int maxDivisor = 0;
		for (int i = b; i >= a ; i--)
		{

			int multiplo = 1;
			if (multiplos[i])
			{
				set<int> s;
				int j = 2;
				int n = i;
				while (n != 1)
				{
					if (n % j == 0)
					{	
						multiplo *= j;
						multiplos[multiplo] = false;
						n = n / j;
						s.insert(j);
					}
					else
						j++;
				}
				int divisores = s.size();
				if (divisores > maxDivisor)
				{
					maxDivisor = divisores;
					maxNumber = i;
				}
		
			}
		}
		printf("%d tiene %d divisores\n", maxNumber, maxDivisor);
	}
		
	return 0;
	
}
