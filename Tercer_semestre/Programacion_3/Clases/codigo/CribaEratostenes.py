# Para hacer la criba de Eratostenes, primero debemos crear un vector
def criba(n):
    esprimo[0] = esprimo[1] = False
    i = 2
    while i * i <= n:
        if (esprimo[i]):
            for j in range(i * i, n + 1, i):
                esprimo[j] = False
        i = i + 1

n = int(input())
esprimo = [True] * (n + 2)
criba(n)
for i in range(2, n):
    if esprimo[i]:
        print(i)



