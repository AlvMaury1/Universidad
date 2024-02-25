def buscar(v, n, elemento) #1
    for i in range(n): # n + 1
        if (elemento == v[i]): # n
            return true #1
    return false // #1
# el total sera t(n) = 2n + 4

def sumaVector(v, n, elemento): # 1
    suma = 0 #1
    for i in range(n): #n + 1
        suma += v[i] #n
    return suma#1
#t(n) = 2n + 4

def contarOcurrencia(v, n, elemento):# 1
    ocurrencia = 0 # 1
    for i in range(n): # n + 1
        if (elemento == v[i]): # n
            ocurrencia += 1 # n
    return ocurrencia # 1
# t(n) = 3n + 4





