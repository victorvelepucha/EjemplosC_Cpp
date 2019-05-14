Funcion Saludar ( valor1 )
	Escribir "Hola ", valor1;
Fin Funcion

Funcion d <- Sumar3Numeros ( a, b, c )
	Definir d Como Entero;
	d = a + b + c;
Fin Funcion

Funcion valorSumado <- Sumar2Numeros ( valor1, valor2 )
	Definir valorSumado Como Entero;
	valorSumado = valor1 + valor2;
Fin Funcion

// Problema: Incremente en 1 un valor dato
Algoritmo EjemploFuncion
	Definir a,b,c,resultado Como Entero;
	Definir nombre como Cadena;
	Escribir "Ingrese su nombre: ";
	Leer nombre;
	Saludar(nombre);
	Escribir "Ingrese dos numeros: ";
	Leer a, b, c;
	resultado = Sumar2Numeros( a , b );
	Escribir "El resultado de la suma los 2 primeros numeros es: ", resultado;
	resultado = Sumar3Numeros( a , b , c);
	Escribir "El resultado de la suma los 3 numeros es: ", resultado;
FinAlgoritmo

