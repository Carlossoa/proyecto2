Algoritmo suma_naturales
    Definir n, suma, i Como Entero
    
    Escribir "Ingrese un n�mero natural:"
    Leer n
    
    suma <- 0
    Para i <- 1 Hasta n Hacer
        suma <- suma + i
    FinPara
    
    Escribir "La suma de los n�meros naturales desde 1 hasta ", n, " es: ", suma
FinAlgoritmo
