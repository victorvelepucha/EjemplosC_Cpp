/* Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

int main() {
	int op;
	do {
		/* mostrar menu */
		printf("\n"); /* no hay forma directa de borrar la pantalla con C estandar */
		printf("Men� de recomendaciones\n");
		printf("   1. Literatura\n");
		printf("   2. Cine\n");
		printf("   3. M�sica\n");
		printf("   4. Videojuegos\n");
		printf("   5. Salir\n");
		/* ingresar una opcion */
		printf("Elija una opci�n (1-5): \n");
		scanf("%i",&op);
		/* procesar esa opci�n */
		switch (op) {
		case 1:
			printf("Lecturas recomendables:\n");
			printf(" + Esper�ndolo a Tito y otros cuentos de f�bol (Eduardo Sacheri)\n");
			printf(" + El juego de Ender (Orson Scott Card)\n");
			printf(" + El sue�o de los h�roes (Adolfo Bioy Casares)\n");
			break;
		case 2:
			printf("Pel�culas recomendables:\n");
			printf(" + Matrix (1999)\n");
			printf(" + El �ltimo samuray (2003)\n");
			printf(" + Cars (2006)\n");
			break;
		case 3:
			printf("Discos recomendables:\n");
			printf(" + Despedazado por mil partes (La Renga, 1996)\n");
			printf(" + B�falo (La Mississippi, 2008)\n");
			printf(" + Gaia (M�go de Oz, 2003)\n");
			break;
		case 4:
			printf("Videojuegos cl�sicos recomendables\n");
			printf(" + D�a del tent�culo (LucasArts, 1993)\n");
			printf(" + Terminal Velocity (Terminal Reality/3D Realms, 1995)\n");
			printf(" + Death Rally (Remedy/Apogee, 1996)\n");
			break;
		case 5:
			printf("Gracias, vuelva prontos\n");
			break;
		default:
			printf("Opci�n no v�lida\n");
		}
		printf("Presione enter para continuar\n");
		getchar(); /* a diferencia del pseudoc�digo, espera un Enter, no cualquier tecla */
	} while (op!=5);
	return 0;
}

