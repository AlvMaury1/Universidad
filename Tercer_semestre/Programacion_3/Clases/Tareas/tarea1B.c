#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void combinaciones (int v1[], int n, int k, bool vistos[],int postAct);
int main()
{
	printf("COMBINACIONES\n");
	int n;	
	
	scanf("%d",&n);
	int *v1 = malloc(n * sizeof(int));
	for (int i = 0; i < n; i++)
		v1[i] = i + 1;
	int k;
	scanf("%d",&k);
	
	bool vistos[5] = {false};
	combinaciones(v1, n, k, vistos,0);
}
void combinaciones (int v1[], int n, int k, bool vistos[],int postAct)
{
	if (k == 0)
	{
		for (int i = 0; i < n; i++)
		{
			if (vistos[i] == true)
				printf("%d",v1[i]);
		}
		printf("\n");
	}
	else
	{
		for (int pos = postAct; pos < n; pos++)
		{
			vistos[pos] = true;
			combinaciones(v1, n, k - 1, vistos, pos + 1);
			vistos[pos] = false;
		}
	}		
}
