// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se ley� otra variable con >>.

int main() {
	int opcionescogida;
	cout << "Ingrese una opci�n del 1 al 3" << endl;
	cin >> opcionescogida;
	switch (opcionescogida) {
	case 1:
		cout << "Escogi� opcion 1" << endl;
		break;
	case 2:
		cout << "Escogi� opcion 2" << endl;
		break;
	case 3:
		cout << "Escogi� opcion 3" << endl;
		break;
	default:
		cout << "Opci�n inv�lida" << endl;
	}
	return 0;
}

