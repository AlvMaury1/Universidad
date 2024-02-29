# Analisis de Complejidad
## Duplicados
1. La primera forma de resolverla era primero ordenar y luego comparar `A[i] == A[i+1]`
    - el algoritmo de ordenamiento que usaremos es quick sort `O(nlogn)`
    - Al final el algoritmo saldria con un `O(n^2)` en el caso de usar buble sort, si es quick sort seria `O(nlogn)` ya que el for sera de 0 a n-1 y es mayor 
```c
int eliminarDuplicados (int v[], int n, int k[])  //1
{
    int j = 0;  // 1
    v.sort(); // nlogn
    // i = 0,n-2 +1, i = 1,n-1
    for (int i = 0; i < n - 1; i ++) // n
    {   
        if (v[i] != v[i + 1]) // n - 1
        { 
            k[j] = v[i];      // n - 1
            j++;              // n - 1  
        }
    }
    return j; //1
}
// T(n) = 3n + nlogn
// O(nlogn)
```
- En el ejercicio del lic, vemos que podemos usar j en funcion de n.
2. Forma lineal de resolver
- Tablas Hash



