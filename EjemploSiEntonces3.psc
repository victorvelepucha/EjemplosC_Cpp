Algoritmo EjemploSiEntonces
	Definir A,B,contador Como Entero;
	contador = -1;
	Repetir
		Limpiar Pantalla;
		Escribir 'Ingrese 2 valores, o 0 para finalizar: ';
		Leer A,B;
		Si (A = 0)
			contador = 0;
		FinSi
		Si A Es Menor que B Entonces
			Escribir A,' es menor que ',B;
		SiNo
			Si A Es Igual que B Entonces
				Escribir A,' es IGUAL que ',B;
			SiNo
				Escribir A, ' es MAYOR que ',B;
			Fin Si
		FinSi
		Esperar tecla;
	Hasta Que contador = 0;
FinAlgoritmo

