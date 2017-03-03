numero=int(input("Dame un numero: "))

factorial=1
for i in range(1, numero+1):
    factorial*=i
    
print "El factorial de ",numero,"es: ",factorial
