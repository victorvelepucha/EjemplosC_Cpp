/* Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

int main() {
	int a;
	int b;
	printf("Ingrese 2 valores: \n");
	scanf("%i",&a);
	scanf("%i",&b);
	if ((a)<(b)) {
		printf("%i es menor que %i\n",a,b);
	} else {
		if ((a)==(b)) {
			printf("%i es IGUAL que %i\n",a,b);
		} else {
			printf("%i es MAYOR que %i\n",a,b);
		}
	}
	return 0;
}

