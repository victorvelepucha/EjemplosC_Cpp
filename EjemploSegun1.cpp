#include<iostream>
using namespace std;

int main()
{
	char valor;
	int a, b, c;
	cout << "----CALCULADORA BASICA ----" << endl;
	cout << "Escoga una opcion" << endl;
	cout << "a: Sumar" << endl;
	cout << "b: Restar" << endl;
	cout << "c: Multiplicar" << endl;
	cin >> valor;
	cout << valor << endl;
	switch(valor)
	{
		case 'a':
			cout << "Ingrese 2 valores a sumar:";
			cin >> a >> b;
			c = a + b;
			cout << "La suma es: " << c << endl;
			break;
		case 2:
			cout << "Escogió el valor 2" << endl;
			break;
		case 3:
			cout << "Escogió el valor 3" << endl;
			break;
		default:
			cout << "Opcion no valida" << endl;
			break;
	}
	return 0;
}
