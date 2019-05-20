/* Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

/* El algoritmo contiene funciones que reciben argumentos por referencia.
   Cuando estos argumentos no se corresponden con arreglos, al llamar a la
   función el argumento actual debe ser un puntero, lo cual se logra 
   anteponiendo el operador & (a la variable que se pasa como argumento
   actual). En estos casos, la traducción automática falla, por lo que
   debe agregarlo manualmente donde sea necesario. */

// Declaraciones adelantadas de las funciones
void saludar();
float calculardoble(float num);
void triplicar(float *num);

/* funcion que no recibe ni devuelve nada */
void saludar() {
	printf("Hola mundo!\n");
}

/* funcion que recibe un argumento por valor, y devuelve su doble */
float calculardoble(float num) {
	float res;
	/* retorna el doble */
	res = num*2;
	return res;
}

/* funcion que recibe un argumento por referencia, y lo modifica */
void triplicar(float *num) {
	/* modifica la variable duplicando su valor */
	(*num) = (*num)*3;
}

/* proceso principal, que invoca a las funciones antes declaradas */
int main() {
	float x;
	printf("Llamada a la funcion Saludar:\n");
	/* como no recibe argumentos pueden omitirse los paréntesis vacios */
	SALUDAR();
	printf("Ingrese un valor numérico para x:\n");
	scanf("%f",&x);
	printf("Llamada a la función CalcularDoble (pasaje por valor)\n");
	printf("El doble de %f es %s\n",x,calculardoble(x));
	printf("El valor original de x es %f\n",x);
	printf("Llamada a la función Triplicar (pasaje por referencia)\n");
	triplicar(x);
	printf("El nuevo valor de x es %f\n",x);
	return 0;
}

