/* Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>
#include<math.h>

/* Lee los tres lados de un triangulo rectangulo, determina  */
/* si corresponden (por Pitargoras) y en caso afirmativo  */
/* calcula el area */
int main() {
	float area;
	float cat1;
	float cat2;
	float hip;
	float l1;
	float l2;
	float l3;
	/* cargar datos */
	printf("Ingrese el lado 1:\n");
	scanf("%f",&l1);
	printf("Ingrese el lado 2:\n");
	scanf("%f",&l2);
	printf("Ingrese el lado 3:\n");
	scanf("%f",&l3);
	/* encontrar la hipotenusa (mayor lado) */
	if (l1>l2) {
		cat1 = l2;
		if (l1>l3) {
			hip = l1;
			cat2 = l3;
		} else {
			hip = l3;
			cat2 = l1;
		}
	} else {
		cat1 = l1;
		if (l2>l3) {
			hip = l2;
			cat2 = l3;
		} else {
			hip = l3;
			cat2 = l2;
		}
	}
	/* ver si cumple con Pitagoras */
	if (pow(hip,2)==pow(cat1,2)+pow(cat2,2)) {
		/* calcualar area */
		area = (cat1*cat2)/2;
		printf("El area es: %f\n",area);
	} else {
		printf("No es un triangulo rectangulo.\n");
	}
	return 0;
}

