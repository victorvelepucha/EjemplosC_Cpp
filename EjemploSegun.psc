Algoritmo EjemploSegun
	Definir opcionEscogida, a, b, c Como Entero;
	Escribir "----CALCULADORA BASICA ----";
	Escribir "Opciones: ";
	Escribir "1: Sumar";
	Escribir "2: Restar";
	Escribir "3: Multiplicar";
	Leer opcionEscogida;	
	Segun opcionEscogida Hacer
		1:
			Escribir "Ingrese 2 numeros";
			Leer a,b;
			c = a + b;
			Escribir "La suma es: ",c;
		2:
			Escribir "Escogi� opcion 2";
		3:
			Escribir "Escogi� opcion 3";
		De Otro Modo:
			Escribir "Opci�n inv�lida";
	Fin Segun
FinAlgoritmo
