// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

using namespace std;

int main() {
	int op;
	
	setlocale(LC_ALL, "");
	system("color F0");
	
	do {
		system("cls");
		// mostrar menu
		cout << endl; // no hay forma directa de borrar la pantalla con C++ estandar
		cout << "Menú de recomendaciones" << endl;
		cout << "   1. Literatura" << endl;
		cout << "   2. Cine" << endl;
		cout << "   3. Música" << endl;
		cout << "   4. Videojuegos" << endl;
		cout << "   5. Salir" << endl;
		// ingresar una opcion
		cout << "Elija una opción (1-5): " << endl;
		cin >> op;
		// procesar esa opción
		switch (op) {
		case 1:
			cout << "Lecturas recomendables:" << endl;
			cout << " + Esperándolo a Tito y otros cuentos de fúbol (Eduardo Sacheri)" << endl;
			cout << " + El juego de Ender (Orson Scott Card)" << endl;
			cout << " + El sueño de los héroes (Adolfo Bioy Casares)" << endl;
			break;
		case 2:
			cout << "Películas recomendables:" << endl;
			cout << " + Matrix (1999)" << endl;
			cout << " + El último samuray (2003)" << endl;
			cout << " + Cars (2006)" << endl;
			break;
		case 3:
			cout << "Discos recomendables:" << endl;
			cout << " + Despedazado por mil partes (La Renga, 1996)" << endl;
			cout << " + Búfalo (La Mississippi, 2008)" << endl;
			cout << " + Gaia (Mägo de Oz, 2003)" << endl;
			break;
		case 4:
			cout << "Videojuegos clásicos recomendables" << endl;
			cout << " + Día del tentáculo (LucasArts, 1993)" << endl;
			cout << " + Terminal Velocity (Terminal Reality/3D Realms, 1995)" << endl;
			cout << " + Death Rally (Remedy/Apogee, 1996)" << endl;
			break;
		case 5:
			cout << "Gracias, vuelva prontos" << endl;
			break;
		default:
			cout << "Opción no válida" << endl;
		}
		cout << "Presione enter para continuar" << endl;
		getch(); // a diferencia del pseudocódigo, espera un Enter, no cualquier tecla
	} while (op!=5);
	return 0;
}

