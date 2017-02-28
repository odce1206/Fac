numDatos = int(input("Cuantos datos van a ser ingresados? "))

suma=0
cont=1
while(cont<=numDatos):
    nueValor=int(input("Dame el dato siguiente: "))
    suma=suma+nueValor
    cont+=1

print "La suma de los numeros es: ",suma

