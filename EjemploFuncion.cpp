// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;

// Para las variables que no se pudo determinar el tipo se utiliza la constante
// SIN_TIPO. El usuario debe reemplazar sus ocurrencias por el tipo adecuado
// (usualmente int,float,string o bool).
#define SIN_TIPO string

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

// Declaraciones adelantadas de las funciones
void saludar(SIN_TIPO valor1);
int sumar3numeros(int a, int b, int c);
int sumar2numeros(int valor1, int valor2);

void saludar(SIN_TIPO valor1) {
	cout << "Hola " << valor1 << endl;
}

int sumar3numeros(int a, int b, int c) {
	int d;
	d = a+b+c;
	return d;
}

int sumar2numeros(int valor1, int valor2) {
	int valorsumado;
	valorsumado = valor1+valor2;
	return valorsumado;
}

// Problema: Incremente en 1 un valor dato
int main() {
	int a;
	int b;
	int c;
	string nombre;
	int resultado;
	cout << "Ingrese su nombre: " << endl;
	cin >> nombre;
	saludar(nombre);
	cout << "Ingrese dos numeros: " << endl;
	cin >> a >> b >> c;
	resultado = sumar2numeros(a,b);
	cout << "El resultado de la suma los 2 primeros numeros es: " << resultado << endl;
	resultado = sumar3numeros(a,b,c);
	cout << "El resultado de la suma los 3 numeros es: " << resultado << endl;
	return 0;
}

