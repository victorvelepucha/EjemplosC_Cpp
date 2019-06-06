#include <iostream>

using namespace std;

int Fibonacci(int n);
void FibonacciIterativo (int n);

int main()
{
	int numero, resultado;
	cout << "Programa que calcula la serie fibonacci de un numero dado" << endl;
	cout << "Ingrese un valor: ";
	cin >> numero;
	//resultado = Fibonacci(numero);
	cout << "El finonacci (recursivo) de " << numero << " detallado es: " ;
	for(int i=0; i< numero; i++)
		cout << Fibonacci(i) << " ";
	cout << endl;
	cout << "El finonacci (iterativo) de " << numero << " detallado es: " ;
	FibonacciIterativo(numero);
	return 0;
}

int Fibonacci(int n)
{
	if( n < 2)
		return n;
	else
		return Fibonacci(n-2) + Fibonacci(n-1);
}

void FibonacciIterativo (int n) 
{ 
	int i;
  	long actual,ant1,ant2;  
  	ant1 = ant2 = 1; 
  	cout << "0 1 1 ";
 	for (i=1; i<n-2; i++) { 
	    actual = ant1 + ant2; 
        cout << actual << " ";
        ant2 = ant1; 
        ant1 = actual; 
	}
}
