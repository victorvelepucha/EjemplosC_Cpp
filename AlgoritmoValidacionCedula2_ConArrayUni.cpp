#include <string.h> 
#include <iostream>
#include <stdlib.h>
using namespace std;
bool ValidarTamanio(string cedula) {
    if (cedula.size() != 10) {
        return false;
    }
    return true;
}
bool ValidaSoloNumeros(string cedula) {
    for (int n = 0; n < cedula.length(); n++) {
        if (!((cedula[n] >= '0' && cedula[n] <= '9'))) {
            return false;
        }
    }
    return true;
}
bool ValidaTercerDigito(string cedula) {
    if (cedula[2] < '0' || cedula[2] > '6') {
        return false;
    }
    return true;
}
int ValidaProvinciaCedula(string cedula) {
    string provincia = cedula.substr(0, 2);
    int codigoProvincia = atoi(provincia.c_str());
    if (codigoProvincia <= 0 || codigoProvincia > 24) {
        return false;
    }
    return true;
}
bool ValidaDigitoVerificador(string cedula) {
    int sumaPares = 0, sumaImpares = 0, sumaTotal = 0, valorPar = 1, digitoCalculado = 0;
    int numerosC[cedula.length()];//int* numerosC = new int[cedula.size() + 1];
    for (int i = 0; i < cedula.size(); i++) {
        numerosC[i] = (int)cedula[i] - 48;
    }
    //suma pares e impares (con multiplicaci�n y validaci�n ), se descarta ultimo digito
    for (int i = 0; i < sizeof(numerosC)/sizeof(numerosC[0])-1; i++) {
        if (!(i % 2 == 0)) {//suma solo impares
            sumaImpares += numerosC[i];
        }
        else {//para impares multiplica por 2 y suma.
            valorPar = numerosC[i] * 2;//multiplica x 2
            if (valorPar >= 10) { //si es mayor a 10 le resta 9
                valorPar -= 9;
            }
            sumaPares += valorPar;
        }
    }
    sumaTotal = sumaPares + sumaImpares;
    digitoCalculado = sumaTotal * 9 % 10;
    if (digitoCalculado == 10) {//si d�gito es 10 entonces es 0
        digitoCalculado = 0;
    }
    if (digitoCalculado == numerosC[cedula.size() - 1]) {
        return true;//cedula valida
    }
    else {
        return false;//cedula no valida
    }
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	/*if (argc < 2) {
		cerr << "La c�dula debe venir como par�metro por la l�nea de comandos para: " << argv[0] << endl;
		return 1;
	}*/
	string cedula = "0703452169";//argv[1];
	//cout << "C�dula =" << cedula << endl;
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
	if (ValidaDigitoVerificador(cedula)) {
		cout << "C�dula " << cedula << " es V�lida!!" << endl;
	}
	else {
		cout << "C�dula " << cedula << " es INV�LIDA!!" << endl;
		return 5;
	}
	return 0;
}
