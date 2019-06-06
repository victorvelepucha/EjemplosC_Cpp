#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(int argc, char** argv) {
	double valorInvertido = 1000.00;
	int cantidadAnios=10;
	//formula c=p(1+t)^n
	double tasaInteres = 0.05;//0.05 = 5%
	double cantidadDepositada=0.0;
		cout << "Año " << "   CantidadDepositada" << endl;
	for(int i=1; i<=cantidadAnios; i++){
		cantidadDepositada = valorInvertido * pow(1 + 0.05,i);
		cout << i << "     " << cantidadDepositada << endl;
	}
	
	//otra forma
	cout <<  setw(5) << "Año " << setw(21) << "CantidadDepositada" << endl;
	cout << fixed << setprecision(2);
	for(int anio=1; anio<=cantidadAnios; anio++){
		cantidadDepositada = valorInvertido * pow(1 + tasaInteres,anio);
		cout << setw(5) << anio << setw(21) << cantidadDepositada << endl;
	}
	return 0;
}

