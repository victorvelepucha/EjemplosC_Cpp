Algoritmo EjemploCirculo
	Definir radio como Entero;
	Definir longitud_circulo, area_circulo Como Real;
	Escribir "Programa para calcular el �rea de un Circulo dado su radio.";
	Escribir Sin Saltar "Ingrese el radio: ";
	Leer radio;
	//Para calcular: longitud=2 PI * r
	longitud_circulo = 2 * PI * radio;
	Escribir "El radio al cuadrado es: ", exp(radio);
	
	Escribir "La longitud del c�rculo es: ", longitud_circulo;
	//Para calcular: area=PI * r^2
	area_circulo = PI * radio * radio;
	Escribir "El �rea del c�rculo es: ", area_circulo;
	area_circulo = PI * (radio * exp(2));
	Escribir "El �rea del c�rculo es: ", area_circulo;
FinAlgoritmo
