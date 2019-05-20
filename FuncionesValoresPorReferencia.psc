// funcion que no recibe ni devuelve nada
Funcion Saludar
	Escribir "Hola mundo!";
FinFuncion

// funcion que recibe un argumento por valor, y devuelve su doble
Funcion res <- CalcularDoble(num) 
	Definir res como real;
	res <- num*2; // retorna el doble
FinFuncion

// funcion que recibe un argumento por referencia, y lo modifica
Funcion Triplicar(num por referencia) 
	num <- num*3; // modifica la variable duplicando su valor
FinFuncion

// proceso principal, que invoca a las funciones antes declaradas
Algoritmo PruebaFunciones
	
	Definir x Como Real;
	
	Escribir "Llamada a la funcion Saludar:";
	Saludar; // como no recibe argumentos pueden omitirse los paréntesis vacios
	
	Escribir "Ingrese un valor numérico para x:";
	Leer x;
	
	Escribir "Llamada a la función CalcularDoble (pasaje por valor)";
	Escribir "El doble de ",x," es ", CalcularDoble(x);
	Escribir "El valor original de x es ",x;
	
	Escribir "Llamada a la función Triplicar (pasaje por referencia)";
	Triplicar(x);
	Escribir "El nuevo valor de x es ", x;
	
FinAlgoritmo
