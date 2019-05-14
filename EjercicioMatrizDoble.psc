//1  17  13  9  5
//6  2  18  14  10
//11  7  3  19  15
//16  12  8  4  20
Algoritmo EjercicioMatrizDoble
	Definir a, b, i, j Como Entero;
	Dimension a[4,5];
	Para i=0 Hasta 3 Con Paso 1 Hacer //i para filas
		Para j=0 Hasta 4 Con Paso 1 Hacer //j para columnas
			a[i,j] = 0;//Inicializa matriz con ceros
		Fin Para
	Fin Para
	a[0,0] = 1; a[0,1] = 17; a[0,2] = 13; a[0,3] = 9; a[0,4] = 5;//asigna valores en primera fila
	Para i=0 Hasta 3 Con Paso 1 Hacer
		Para j=0 Hasta 4 Con Paso 1 Hacer
			Si i=0 Entonces
				Escribir Sin Saltar a[i,j], "  ";//imprime valor de primera fila
			SiNo	
				Si j=0 entonces //si esta en primera columna hacer:
					a[i,j] = a[i-1,j]+5;
					Escribir Sin Saltar a[i,j], "  ";
				SiNo
					a[i,j] = a[i-1,j-1]+1;
					 Escribir Sin Saltar a[i,j], "  ";
				FinSi
			FinSi
		Fin Para
		Escribir "";
	Fin Para
FinAlgoritmo
