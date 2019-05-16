#include <iostream>
#include "Calculadora.h"
using namespace std;

int main(int argc, char** argv) {
	double a=0, b=0, resultado=0;
	char oper='\0';
	cout << "Ingrese 2 valors: formato: a+b, a-b, a*b, a/b: ";
	cin >> a >> oper >> b;
	Calculadora c;
	resultado = c.Calcular(a, oper, b);
	cout << "El resultado es: " << resultado << endl;
	return 0;
}
