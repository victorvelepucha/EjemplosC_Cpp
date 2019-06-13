#include <iostream>
using namespace std;
//metodo no funciona
void IntecambiarVariables0(int valor1, int valor2)
{
	int aux = valor1;
	valor1 = valor2;
	valor2 = aux;
}

void IntecambiarVariables1(int *valor1, int *valor2)
{
	int aux = *valor1;
	*valor1 = *valor2;
	*valor2 = aux;
}

int* IntecambiarVariables2(int valor1, int valor2)
{
	//int valor3 = valor1;
	int valor3[] = { valor2, valor1};
	//valor1 = *valor2;
	//*valor2 = valor3;
	return valor3;
}

void IntecambiarVariables3(int valor3[])
{
	int aux = valor3[0];
	valor3[0] = valor3[1];
	valor3[1] = aux;
}

int* IntecambiarVariables4(int valor3[])
{
	int* valor4 = valor3;
	int aux = valor3[0];
	valor3[0] = valor3[1];
	valor3[1] = aux;
	return valor4;
}


int main()
{
	int a, b;
	int c;
	int d[2];
	cout << "Programa que intercambia variables" << endl;
	cout << "Ingrese 2 variables: ";
	cin >> a >> b;
	d[0]=a; d[1]=b;
	cout << "Antes del intercambio dentro del main : " << "a=" << a << ", b=" << b << endl;
	c = a; a = b; b = c;//OK
	cout << "Luego del intercambio dentro del main : " << "a=" << a << ", b=" << b << endl << endl;//no intercambia nada

	cout << "Antes del intercambio dentro de IntecambiarVariables0 : " << "a=" << a << ", b=" << b << endl;
	IntecambiarVariables0(a, b);
	cout << "Luego del llamar a IntecambiarVariables0: " << "a=" << a << ", b=" << b << endl << endl;//no intercambia nada

	cout << "Antes del intercambio dentro de  IntecambiarVariables1 : " << "a=" << a << ", b=" << b << endl;
	IntecambiarVariables1(&a, &b);
	cout << "Luego del llamar a IntecambiarVariables1: " << "a=" << a << ", b=" << b << endl << endl;//OK

	cout << "Antes del intercambio dentro de IntecambiarVariables2 : " << "a=" << a << ", b=" << b << endl;
	int* puntero = IntecambiarVariables2(a, b);
	cout << "Luego del llamar a IntecambiarVariables2: " << "a=" << puntero[0] << ", b=" << puntero[1] << endl << endl;//OK

	cout << "Antes del intercambio dentro de IntecambiarVariables3 : " << "a=" << d[0] << ", b=" << d[1] << endl;
	int* puntero2 = IntecambiarVariables4(d);
	cout << "Luego del llamar a IntecambiarVariables2: " << "a=" << puntero2[0] << ", b=" << puntero2[1] << endl << endl;//OK
	
	return 0;
}
