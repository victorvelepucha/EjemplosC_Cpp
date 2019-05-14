/* Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

/* En C no hay variables para guardar cadenas de texto, sino que debe construirse
   un arreglo de caracteres (tipo char). El tamaño del arreglo determina la longitud
   máxima que puede tener la cadena que guarda (tamaño-1, por el caracter de terminación).
   La constante MAX_STRLEN define el tamaño máximo que se utiliza en este programa para
   cualquier cadena. */
#define MAX_STRLEN 256

/* Para las variables que no se pudo determinar el tipo se utiliza la constante
   SIN_TIPO. El usuario debe reemplazar sus ocurrencias por el tipo adecuado
   (usualmente int,float,bool, o char[]). */
#define SIN_TIPO float

/* Para leer variables de texto se utiliza scanf, que lee solo una palabra. 
   Para leer una linea completa (es decir, incluyendo los espacios en blanco)
   se debe utilzar ges (ej, reemplazar scanf("%s",x) por gets(x)) pero 
   obliga a agregar un getchar() antes del gets si antes del mismo se leyó
   otra variable con scanf. */

// Declaraciones adelantadas de las funciones
void saludar(SIN_TIPO valor1);
int sumar3numeros(SIN_TIPO a, SIN_TIPO b, SIN_TIPO c);
int sumar2numeros(SIN_TIPO valor1, SIN_TIPO valor2);

void saludar(SIN_TIPO valor1) {
	printf("Hola %s\n",valor1);
}

int sumar3numeros(SIN_TIPO a, SIN_TIPO b, SIN_TIPO c) {
	int d;
	d = a+b+c;
	return d;
}

int sumar2numeros(SIN_TIPO valor1, SIN_TIPO valor2) {
	int valorsumado;
	valorsumado = valor1+valor2;
	return valorsumado;
}

/* Problema: Incremente en 1 un valor dato */
int main() {
	int a;
	int b;
	int c;
	char nombre[MAX_STRLEN];
	int resultado;
	printf("Ingrese su nombre: \n");
	scanf("%s",nombre);
	saludar(nombre);
	printf("Ingrese dos numeros: \n");
	scanf("%i",&a);
	scanf("%i",&b);
	scanf("%i",&c);
	resultado = sumar2numeros(a,b);
	printf("El resultado de la suma los 2 primeros numeros es: %i\n",resultado);
	resultado = sumar3numeros(a,b,c);
	printf("El resultado de la suma los 3 numeros es: %i\n",resultado);
	return 0;
}

