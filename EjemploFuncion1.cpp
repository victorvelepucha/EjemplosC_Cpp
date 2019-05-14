
#include<iostream>
using namespace std;

void Saludar(string valor1);
int Sumar3numeros(int a, int b, int c);
int Sumar2numeros(int valor1, int valor2);

void Saludar(string valor1) {
	cout << "Hola " << valor1 << endl;
}

int Sumar3numeros(int a, int b, int c) {
	int d;
	d = a+b+c;
	return d;
}

int Sumar2numeros(int valor1, int valor2) {
	int valorsumado;
	valorsumado = valor1+valor2;
	return valorsumado;
}

int main() {
	int a, b, c, resultado;
	string nombre;
	cout << "Ingrese su nombre: " << endl;
	cin >> nombre;
	Saludar(nombre);
	cout << "Ingrese dos numeros: " << endl;
	cin >> a >> b >> c;
	resultado = Sumar2numeros(a,b);
	cout << "El resultado de la suma los 2 primeros numeros es: " << resultado << endl;
	resultado = Sumar3numeros(a,b,c);
	cout << "El resultado de la suma los 3 numeros es: " << resultado << endl;
	return 0;
}

