Funcion resultado <- Factorial(num)
	Definir i, acum, resultado como Entero;
    acum<-1;
    Para i<-1 Hasta num Con Paso 1 Hacer
        acum<-acum*i;
    FinPara
	resultado = acum;
FinFuncion

Algoritmo EjemploFactorial
	Definir num, resultado Como Entero;
    Escribir "Digite un numero para calcular su factorial";
    Leer num;
	resultado = Factorial(num);
    Escribir "El factorial de ",num," es ",resultado;
FinAlgoritmo
