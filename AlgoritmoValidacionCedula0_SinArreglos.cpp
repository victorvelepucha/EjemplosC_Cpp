#include <string.h> 
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char** argv ){
	int tamanioCedula=10;
	setlocale(LC_ALL, "");
	int digito01=0;
	int digito02=7;
	int digito03=0;
	int digito04=3;
	int digito05=4;
	int digito06=5;
	int digito07=2;
	int digito08=1;
	int digito09=6;
	int digito10=9;
	cout << "Ingrese cada numero de su c�dula separado por un espacio: " << endl;
	cin >> digito01 >> digito02 >> digito03 >> digito04 >> digito05 >> digito06 >> digito07 >> digito08 >> digito09 >> digito10;
	//Valida 3er digito de cedula
	if (digito03 < 0 || digito03 > 6) {
		cout << "Tercer d�gito de c�dula es INV�LIDO!!" << endl;
		return 3;
	}
	//Valida codigo de provincia
	int codigoProvincia = digito02;
	codigoProvincia = ( digito01 * 10 ) + codigoProvincia;
    if (codigoProvincia < 0 || codigoProvincia > 24) {
		cout << "C�dula no fue emitida para una provincia v�lida!!" << endl;
		return 4;
	}
	//Valida digito de chequeo acorde al algoritmo Luhn
	int sumaPares=0, sumaImpares=0, sumaTotal = 0, valorTmp=1; 
    //suma pares e impares (con multiplicaci�n y validaci�n ), se descarta ultimo digito (digito10)
	valorTmp = digito01 * 2;
	if (valorTmp >= 10)//si es mayor a 10 le resta 9
	{ 
        valorTmp -= 9;
    }
    sumaImpares += valorTmp;
	valorTmp = digito03 * 2;
	if (valorTmp >= 10)//si es mayor a 10 le resta 9
	{ 
        valorTmp -= 9;
    }
    sumaImpares += valorTmp;
	valorTmp = digito05 * 2;
	if (valorTmp >= 10)//si es mayor a 10 le resta 9
	{ 
        valorTmp -= 9;
    }
    sumaImpares += valorTmp;
	valorTmp = digito07 * 2;
	if (valorTmp >= 10)//si es mayor a 10 le resta 9
	{ 
        valorTmp -= 9;
    }
    sumaImpares += valorTmp;
	valorTmp = digito09 * 2;
	if (valorTmp >= 10)//si es mayor a 10 le resta 9
	{ 
        valorTmp -= 9;
    }
    sumaImpares += valorTmp;
   	sumaPares = digito02 + digito04 + digito06 + digito08;
	sumaTotal = sumaImpares + sumaPares;
    int inmediatoSuperior = (sumaTotal - (sumaTotal % 10)) + 10;
    int digitoCalculado = inmediatoSuperior - sumaTotal;
    //int digitoCalculado = (sumaTotal * 9) % 10;
    //int digitoCalculado = 10 - (sumaTotal % 10);
    if (digitoCalculado == 10) {
        digitoCalculado = 0;
    }
    int valorChequeo=0;
    if (digitoCalculado == digito10) {
        valorChequeo = 1;//cedula valida
    }
    else {
        valorChequeo = 0;//cedula no valida
    }
	if ( valorChequeo ) {
		cout << "C�dula es V�lida!!" << endl;
	}
	else {
		cout << "C�dula es INV�LIDA!!" << endl;
		return 5;
	}
	return 0;
}
