#include <iostream>
using namespace std;

int Suma(int a) 
{
	return a + 1;
}

int Suma(int a, int b) 
{
	return a + b;
}

int Suma(int a, int b, int c) 
{
	return a + b + c;
}


// función cuadrado para valores int
int cuadrado( int x )
{
	cout << "el cuadrado del valor int " << x << " es ";
	return x * x;
} // fin de la función cuadrado con argumento int

// función cuadrado para valores double
double cuadrado( double y )
{
	cout << "el cuadrado del valor double " << y << " es ";
	return y * y;
} // fin de la función cuadrado con argumento double

int main(int argc, char** argv) {
	int a, b, c, d;

	cout << cuadrado( 7 ); // llama a la versión int
	cout << endl;
	cout << cuadrado( 7.5 ); // llama a la versión double
	cout << endl;
	
	cout << "Ingrese 3 valores a sumar: " << endl;
	cin >> a >> b >> c;
	cout << a << " " << b << " " << c << endl;
	d = Suma(a);
	cout << "El resultado de incrementar el primer valor es: " << d << endl;
	d = Suma(a, b);
	cout << "El resultado de suma los 2 primeros numeros es: " << d << endl;
	d = Suma(a, b, c);
	cout << "El resultado de sumar los 3 numeros es: " << d << endl;

	
	return 0;
}

