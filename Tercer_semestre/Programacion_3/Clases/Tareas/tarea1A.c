#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void duplicados (int v[], int n);
void combinaciones (int v1[], int n, int k, bool vistos[],int postAct);
int main()
{
	int n = 10;
	int v[] = {1, 2, 2, 1, 2, 3, 3, 4, 4,5};
	for (int i = 0; i < n; i++)
	{
		printf("%d\n", v[i]);
	}
	duplicados (v, n);
	printf("\nDESPUES:\n");
	for (int i = 0; i < n; i++)
        {
		if (v[i] != -1)
        		printf("%d\n", v[i]);
        }
	
	printf("COMBINACIONES\n");
	
	
	scanf("%d",&n);
	int *v1 = malloc(n * sizeof(int));
	for (int i = 0; i < n; i++)
		v1[i] = i + 1;
	int k;
	scanf("%d",&k);
	
	bool vistos[5] = {false};
	combinaciones(v1, n, k, vistos,0);
}

void duplicados (int v[], int n)
{
	for (int i = 0; i < n; i++)
	{
		int elemento = v[i];
		if (elemento == - 1) continue; 
		for (int j = i + 1; j < n; j++)
		{
			if (v[j] == -1)continue;
			else if (elemento == v[j])
				v[j] = - 1;	
		}
	}
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
