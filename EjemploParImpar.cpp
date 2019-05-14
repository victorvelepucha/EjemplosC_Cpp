#include <iostream>
using namespace std;
int main()
{
	int numero;
	cout << "Ingrese un numero: ";
	cin >> numero;
	if(numero%2 == 0 )
	{
		cout << "El numero ingresado es PAR";
	}
	else
	{
		cout << "El numero ingresado es IMPAR";
	}
	cout << endl;
	//expresion_1 ? expresion_2 : expresion_3;
	cout << "El numero ingresado es" << (numero%2 == 0 ) ? "PAR": "IMPAR" ; 
	cout << endl;
	cout << (numero%2 == 0 ) ? "El numero es PAR": "El numero es IMPAR" ; 
	cout << endl;
	(numero%2 == 0 ) ? cout << "El numero es PAR": cout << "El numero es IMPAR" ; //OK
	cout << endl;
	(numero%2 == 0 ) ? cout << "El numero es PAR": "El numero es IMPAR" ; 
	return 0;
}
