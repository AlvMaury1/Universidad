#include <stdio.h>
#include <stdbool.h>
void duplicados (int v[], int n)
{
	bool vistos[100000] = {false};
	for (int i = 0; i < n; i++)
	{
		if (!vistos[v[i]])
		{
			vistos[v[i]] = true;
		}
		else
			v[i] = -1;
	}
}
