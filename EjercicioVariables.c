/* Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>
#include<stdbool.h>

/* En C no hay variables para guardar cadenas de texto, sino que debe construirse
   un arreglo de caracteres (tipo char). El tamaño del arreglo determina la longitud
   máxima que puede tener la cadena que guarda (tamaño-1, por el caracter de terminación).
   La constante MAX_STRLEN define el tamaño máximo que se utiliza en este programa para
   cualquier cadena. */
#define MAX_STRLEN 256

int main() {
	int valor1;
	bool valor10;
	char valor2[MAX_STRLEN];
	char valor3[MAX_STRLEN];
	int valor4;
	float valor5;
	char valor6[MAX_STRLEN][4];
	char valor7[MAX_STRLEN];
	bool valor8;
	bool valor9;
	valor1 = 5;
	valor2 = "5";
	valor3 = "5";
	valor4 = -4;
	valor5 = 3.14;
	valor6[0] = "2";
	valor6[1] = "0";
	valor6[2] = "1";
	valor6[3] = "9";
	valor7 = "2019";
	valor8 = true;
	valor9 = false;
	valor10 = false;
	printf("%i\n",valor1);
	printf("%s\n",valor2);
	printf("%s\n",valor3);
	printf("%i\n",valor4);
	printf("%f\n",valor5);
	printf("%s%s%s%s\n",valor6[0],valor6[1],valor6[2],valor6[3]);
	printf("%s\n",valor7);
	printf("%i\n",valor8);
	printf("%i\n",valor9);
	printf("%i\n",valor10);
	return 0;
}

