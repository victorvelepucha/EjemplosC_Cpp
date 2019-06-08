#include <string.h> 
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char** argv ){
	int tamanioCedula=0;
	setlocale(LC_ALL, "");
	if (argc < 2) {
		cerr << "La c�dula debe venir como par�metro por la l�nea de comandos para: " << argv[0] << endl;
		return 1;
	}
	char cedula[] = "0703452169";//argv[1];
	//cout << "C�dula =" << cedula << endl;
	//Valida tama�o de cedula
	while(cedula[tamanioCedula]!=0) 
		tamanioCedula++;
    if (tamanioCedula != 10) {
		cout << "Tama�o c�dula " << cedula << " no v�lido!!" << endl;
		return 1;
	}
	//Valida que solo tenga n�meros
	int cedulaTieneSoloNumeros=1;
    for (int n = 0; n < tamanioCedula; n++) {
        if (! (cedula[n] >= '0' && cedula[n] <= '9') ) {
            cedulaTieneSoloNumeros = 0;
        }
    }
	if ( ! cedulaTieneSoloNumeros ) {
		cout << "C�dula " << cedula << " solo debe tener n�meros!!" << endl;
		return 2;
	}
	//Valida 3er digito de cedula
	if (cedula[2] < '0' || cedula[2] > '6') {
		cout << "Tercer d�gito de c�dula " << cedula << " es INV�LIDO!!" << endl;
		return 3;
	}
	//Valida codigo de provincia
	int codigoProvincia = (int)cedula[1]-48;
	codigoProvincia = ( ((int)cedula[0]-48) * 10 ) + codigoProvincia;
    if (codigoProvincia < 0 || codigoProvincia > 24) {
		cout << "C�dula " << cedula << " no fue emitida para una provincia v�lida!!" << endl;
		return 4;
	}
	//Valida digito de chequeo acorde al algoritmo Luhn
	int sumaPares = 0, sumaImpares = 0, sumaTotal = 0, valorImpar = 1, inmediatoSuperior = 0, digitoCalculado = 0, valorChequeo=0;
    int* numerosC = new int[tamanioCedula];
    for (int i = 0; i <= 10; i++) {
        numerosC[i] = (int)cedula[i] - 48;
    }
    //suma pares e impares (con multiplicaci�n y validaci�n ), se descarta ultimo digito
    for (int i = 0; i <tamanioCedula-1; i++) {
        if (!(i % 2 == 0)) {//suma solo pares
            sumaPares += numerosC[i];
        }
        else {
            valorImpar = numerosC[i] * 2;//multiplica x 2
            if (valorImpar >= 10) { //si es mayor a 10 le resta 9
                valorImpar -= 9;
            }
            sumaImpares += valorImpar;
        }
    }
    sumaTotal = sumaPares + sumaImpares;
    inmediatoSuperior = (sumaTotal - (sumaTotal % 10)) + 10;
    digitoCalculado = inmediatoSuperior - sumaTotal;
    if (digitoCalculado == 10) {
        digitoCalculado = 0;
    }
    if (digitoCalculado == numerosC[tamanioCedula - 1]) {
        valorChequeo = 1;//cedula valida
    }
    else {
        valorChequeo = 0;//cedula no valida
    }
    delete numerosC;

	if ( valorChequeo ) {
		cout << "C�dula " << cedula << " es V�lida!!" << endl;
	}
	else {
		cout << "C�dula " << cedula << " es INV�LIDA!!" << endl;
		return 5;
	}
	return 0;
}
