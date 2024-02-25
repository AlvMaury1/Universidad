#include <stdio.h>


void sumaM(int A[][], int B[][], int C[][], int n, int m);
int main()
{

	
}
void sumaM(int A[][], int B[][], int C[][], int n, int m) //1
{
	for (int i = 0; i < n; i++) //n +1
	{
		for (int j = 0; j < m; j++) // n * m + 1
		{
			C[i][j] = A[i][j] + B[i][j]; //n * m
		}
	}
}
// T(n,m) = (n + 1) * (n * m + 1) + n * m
// T(n,m) = 2n * m + 2n + 2
// En este caso como tnemos a la variables n,m tecimos t(n,m)
// para encontrar el O(n, m)
// Pero si n > m (ya que si es mayor tomaremos a n como el mayor y tendremos que m = n por lo cual sera una complejidad cuadratica)entonces la complejidad seria O(n^2) pero si es al reves seria O(m^2)
// De esta manera podemos decir que el comportamiento de nuestro algoritmo es cuadratico
