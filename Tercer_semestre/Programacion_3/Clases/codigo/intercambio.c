#include <stdio.h>
void intercambio(int *a, int *b);
int main()
{
	int a, b, temp;
	scanf("%i %i", &a, &b);
	printf("a: %i,b: %i\n", a, b);
	intercambio(&a, &b);
	printf("a: %i, b: %i\n", a, b);
}
void intercambio(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

