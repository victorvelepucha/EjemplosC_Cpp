#include <iostream>
using namespace std;
int Suma(int a) {
	return a + 1;
}
int Suma(int a, int b) {
	return a + b;
}
int Suma(int a, int b, int c) {
	return a + b + c;
}
int main() {
	int a, b, c, d;
	cout << "Ingrese 3 valores a sumar: " << endl;
	cin >> a >> b >> c;
	cout << a << " " << b << " " << c << endl;
	d = Suma(a);
	cout << "El resultado de incrementar el primer valor es: " << d << endl;
	d = Suma(a, b);
	cout << "El resultado de suma los 2 primeros numeros es: " << d << endl;
	d = Suma(a, b, c);
	cout << "El resultado de sumar los 3 numeros es: " << d << endl;
}

