#include <string.h> 
#include <iostream>
#include <stdlib.h>
using namespace std;
int ValidarTamanio(char cedula[]) {
	int contador = 0;
	while(cedula[contador]!=0) 
		contador++;
    if (contador != 10) {
        return 0;
    }
    return 1;
}
int ValidaSoloNumeros(char cedula[]) {
    for (int n = 0; n < 10; n++) {
        if (! (cedula[n] >= '0' && cedula[n] <= '9') ) {
            return 0;
        }
    }
    return 1;
}
int ValidaTercerDigito(char cedula[]) {
	if (cedula[2] < '0' || cedula[2] > '6') {
		return 0;
	}
	return 1;
}
int ValidaProvinciaCedula(char cedula[]) {
	int codigoProvincia = (int)cedula[1]-48;
	codigoProvincia = ( ((int)cedula[0]-48) * 10 ) + codigoProvincia;
    if (codigoProvincia < 0 || codigoProvincia > 24) {
        return 0;
    }
    return 1;
}
int ValidaDigitoChequeo(char cedula[]) {
    int sumaPares = 0, sumaImpares = 0, sumaTotal = 0, valorTmp = 1,
        inmediatoSuperior = 0, digitoCalculado = 0, valorRetorno=0;
    int* numerosC = new int[10];
    for (int i = 0; i <= 10; i++) {
        numerosC[i] = (int)cedula[i] - 48;
    }
    //suma pares e impares (con multiplicaci�n y validaci�n ), se descarta ultimo digito
    for (int i = 0; i <10-1; i++) {
        if (!(i % 2 == 0)) {//suma solo pares
            sumaPares += numerosC[i];
        }
        else {
            valorTmp = numerosC[i] * 2;//multiplica x 2
            if (valorTmp >= 10) { //si es mayor a 10 le resta 9
                valorTmp -= 9;
            }
            sumaImpares += valorTmp;
        }
    }
    sumaTotal = sumaPares + sumaImpares;
    inmediatoSuperior = (sumaTotal - (sumaTotal % 10)) + 10;
    digitoCalculado = inmediatoSuperior - sumaTotal;
    if (digitoCalculado == 10) {
        digitoCalculado = 0;
    }
    if (digitoCalculado == numerosC[10 - 1]) {
        valorRetorno = 1;//cedula valida
    }
    else {
        valorRetorno = 0;//cedula no valida
    }
    delete numerosC;
    return valorRetorno;
}

int main(int argc, char** argv ){
	setlocale(LC_ALL, "");
	if (argc < 2) {
		cerr << "La c�dula debe venir como par�metro por la l�nea de comandos para: " << argv[0] << endl;
		return 1;
	}
	char cedula[] = "0703452169";//argv[1];
	cout << "C�dula =" << cedula << endl;
	if (!ValidarTamanio(cedula)) {
		cout << "Tama�o c�dula " << cedula << " no v�lido!!" << endl;
		return 1;
	}
	if (!ValidaSoloNumeros(cedula)) {
		cout << "C�dula " << cedula << " solo debe tener n�meros!!" << endl;
		return 2;
	}
	if (!ValidaTercerDigito(cedula)) {
		cout << "Tercer d�gito de c�dula " << cedula << " es INV�LIDO!!" << endl;
		return 3;
	}
	if (!ValidaProvinciaCedula(cedula)) {
		cout << "C�dula " << cedula << " no fue emitida para una provincia v�lida!!" << endl;
		return 4;
	}
	if (ValidaDigitoChequeo(cedula)) {
		cout << "C�dula " << cedula << " es V�lida!!" << endl;
	}
	else {
		cout << "C�dula " << cedula << " es INV�LIDA!!" << endl;
		return 5;
	}
	return 0;
}
