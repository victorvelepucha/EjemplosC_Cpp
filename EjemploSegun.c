/* Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

int main() {
	int opcionescogida;
	printf("Ingrese una opci�n del 1 al 3\n");
	scanf("%i",&opcionescogida);
	switch (opcionescogida) {
	case 1:
		printf("Escogi� opcion 1\n");
		break;
	case 2:
		printf("Escogi� opcion 2\n");
		break;
	case 3:
		printf("Escogi� opcion 3\n");
		break;
	default:
		printf("Opci�n inv�lida\n");
	}
	return 0;
}

