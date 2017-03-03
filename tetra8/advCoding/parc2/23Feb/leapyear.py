import calendar

anio = int(input("Escribe un anio "))

if calendar.isleap(anio) == 1:
    print "Es Bisiesto"
else: 
    print "No es bisiesto"
