def numerosPrimos(n):
    cont = 0
    for i in range (1, n +1):
        if (n % i == 0):
            cont += 1
    print(f"{n} es primo" if cont == 2 else "")

for i in range (1, int(input()) + 1 ):
    numerosPrimos(i)
