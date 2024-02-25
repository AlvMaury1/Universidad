#include <stdio.h>
#include <stdbool.h>
void duplicados (int v[], int n);

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

			

