import math
def PrimosTri(n):
    cont = 0
    for i in range(2, int(math.sqrt(n)) + 1):
        if (n % i == 0):
            cont = cont + 1
    print(f"YES" if cont == 1 else "NO")


for i in range(int(input())):
    k = int(input())
    PrimosTri(k)
