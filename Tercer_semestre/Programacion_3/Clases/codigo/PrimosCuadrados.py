import math
def PrimosCuadrado(n):
    cont = 0
    for i in range(2, int(math.sqrt(n)) + 1):
        if (n % i == 0):
            cont = cont + 1
    print(f"{n} es primo" if cont == 0 else "")

n = int(input())
for i in range(1, n + 1):
    PrimosCuadrado(i)
