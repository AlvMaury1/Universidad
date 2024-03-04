#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main()
{
	int a;
	const int MAX_LENGTH = 1000; 
	char s[MAX_LENGTH];
	cin >> a;
	for (int i = 1; i <= a; i++)
	{
		scanf("%s", s);
		for (int j = 0; j < strlen(s); j++)
		{
			cout << s[j] << endl;
		}
	}
	return 0;
}


