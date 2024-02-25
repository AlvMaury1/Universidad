# Analisis de Algoritmos
- El objetivo de el analisis de algoritmos es buscar que algoritmo es mejor
- Para buscar el mejor algoritmo podemos usar diferentes criterios como:
    - Implementacion
    - Velocidad
    - Memoria
> Dentro de estos criterios se topan dos, la velocidad y la memoria, aveces necesitamos usar mas memoria para mas velocidad y viceversa

> Una tesis puede tratar de un algoritmo 

## Complejidad de Algoritmos
- Temporal Calcula la velociadad de algoritmo
    - Estimacion teorica o apriori
        - las instrucciones simples valen 1 y los fors valen n 
        - las funciones por el llamado ya valen 1 de por si
    - Verificacion empirica o aposteriori
        - Para la verificacion empirica tomamos en cuenta, la velocidad de la computadora, el lenguaje (ya que cada compilador tiene diferente velocidad)


## complejidad constante
- Un algoritmo que tiene un tiempo constante, no cambia.
- La complejidad de estas constantes sera O(1)
``` java
void intercambio () //1
{
    c = a; //1
    a = b; // 1
    b = c; // 1
 // Total = 4

}
```

