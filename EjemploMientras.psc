// Juego simple que pide al usuario que adivine un numero en 10 intentos

Algoritmo EjemploMientras
	
	Definir intentos,num_secreto,num_ingresado Como Entero;
	intentos<-4;
	num_secreto <- azar(10)+1;
	Escribir "El numero aleatorio generado es: ",num_secreto;
	Escribir "Tiene ", intentos, " intentos, Adivine el numero (de 1 a 10):";
	Leer num_ingresado;
	Mientras (num_secreto != num_ingresado) Y (intentos > 1) Hacer
		Si num_secreto>num_ingresado Entonces
			Escribir "Muy bajo";
		SiNo 
			Escribir "Muy alto";
		FinSi
		intentos <- intentos-1;
		Escribir "Le quedan ",intentos," intentos:";
		Leer num_ingresado;
	FinMientras
	
	Si num_secreto=num_ingresado Entonces
		Escribir "Exacto! Usted adivino en ",intentos," intentos.";
	SiNo
		Escribir "El numero era: ",num_secreto;
	FinSi
	
FinAlgoritmo
