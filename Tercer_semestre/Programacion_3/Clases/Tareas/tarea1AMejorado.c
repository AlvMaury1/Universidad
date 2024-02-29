#include <stdio.h>
#include <stdbool.h>

void generar_combinaciones(int v[], int n, int k);

int main() {
    printf("COMBINACIONES\n");
    int n;	
	
    printf("Ingrese el tamaño del conjunto: ");
    scanf("%d", &n);
    
    int v[n];
    for (int i = 0; i < n; i++)
        v[i] = i + 1;
    
    int k;
    printf("Ingrese el tamaño de las combinaciones: ");
    scanf("%d", &k);
    
    generar_combinaciones(v, n, k);

    return 0;
}

void generar_combinaciones(int v[], int n, int k) {
    int indices[k];
    bool fin = false;

    // Inicializar los primeros índices
    for (int i = 0; i < k; i++)
        indices[i] = i;

    while (!fin) {
        // Imprimir la combinación actual
        printf("{ ");
        for (int i = 0; i < k; i++)
            printf("%d ", v[indices[i]]);
        printf("}\n");

        // Encontrar el índice más a la derecha que se puede incrementar
        int j = k - 1;
        while (j >= 0 && indices[j] == n - k + j)
            j--;

        if (j == -1)
            fin = true;
        else {
            indices[j]++;
            for (int i = j + 1; i < k; i++)
                indices[i] = indices[i - 1] + 1;
        }
    }
}
