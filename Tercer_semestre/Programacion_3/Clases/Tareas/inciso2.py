import math

n = int(input())
k = int(input())
combinaciones = math.factorial(n) // (math.factorial(k) * math.factorial(n - k))
print(combinaciones)
v = [i for i in range(1, n +1)]
i = 0
l = 1
n-k
while (combinaciones > 0):
    caracter = str(v[i])
    if k != 2:
        for x in range(k - 2):
            if l + x < n:
                caracter += str(v[l + x])
    for j in range(l + (k - 2), n):
        print(f"{caracter}{v[j]}")
        combinaciones -= 1
    l += 1
    if(n == l + (k - 2)):
       i += 1
       l = i + 1



