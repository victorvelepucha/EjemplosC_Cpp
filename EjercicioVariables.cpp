// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
#include<cmath>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	float area_circulo;
	float longitud_circulo;
	float pi;
	int radio;
	cout << "Programa para calcular el área de un Circulo dado su radio." << endl;
	cout << "Ingrese el radio: ";
	cin >> radio;
	// Para calcular: longitud=2 PI * r
	longitud_circulo = 2*M_PI*radio;
	cout << "El radio al cuadrado es: " << exp(radio) << endl;
	cout << "La longitud del círculo es: " << longitud_circulo << endl;
	// Para calcular: area=PI * r^2
	area_circulo = M_PI*radio*radio;
	cout << "El área del círculo es: " << area_circulo << endl;
	area_circulo = M_PI*(radio*exp(2));
	cout << "El área del círculo es: " << area_circulo << endl;
	return 0;
}

