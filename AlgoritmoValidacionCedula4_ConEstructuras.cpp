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
        if ( ! (cedula[n] >= '0' && cedula[n] <= '9') ) {
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
    int sumaTotal = 0, digitoCalculado = 0;
    int arregloCedula[3][cedula.length()];
    //copio cedula como numero en primera fila de arreglo
    for (int i = 0; i < cedula.size(); i++) {
        arregloCedula[0][i] = (int)cedula[i] - 48;
	}
	//Coloco 2 o 1 acorde al algoritmo Luhn
    for (int i = 0; i < cedula.size()-1; i++) {
        if ( i % 2 == 0 ) {//solo pares
            arregloCedula[1][i] = 2;
        }
        else {//caso impares
            arregloCedula[1][i] = 1;
        }
    }
	//realizo multiplicacion acorde al algoritmo Luhn
    for (int i = 0; i < cedula.size()-1; i++) {
        arregloCedula[2][i] = arregloCedula[0][i] * arregloCedula[1][i];
        if (arregloCedula[2][i] >= 10) { //si es mayor a 10 le resta 9
            arregloCedula[2][i] -= 9;
        }
        sumaTotal += arregloCedula[2][i];//a la vez voy de una vez sumando
    }
    /*
	cout << endl << "COCIENTES\t";
    for (int i = 0; i < cedula.size()-1; i++) {
        cout << arregloCedula[1][i] << " ";
	}
	cout << endl << "CEDULA\t\t";
	for (int i = 0; i < cedula.size()-1; i++) {
        cout << arregloCedula[0][i] << " ";
	}
	cout << endl << "RESULTADO\t";
	for (int i = 0; i < cedula.size()-1; i++) {
        cout << arregloCedula[2][i] << " ";
	}
	*/
	for(int j=0; j<3; j++)
    {
		if (j==0 ) cout << "CEDULA\t\t";
		if (j==1 ) cout << "COCIENTES\t";
		if (j==2 ) cout << "RESULTADO\t";
		for (int i = 0; i < cedula.size()-1; i++) {
	        cout << arregloCedula[j][i] << " ";
		}
		cout << endl;
	}
	digitoCalculado = 10 - (sumaTotal % 10);
	cout << sumaTotal << " " << digitoCalculado;
    if (digitoCalculado == 10) {//si dígito es 10 entonces es 0
        digitoCalculado = 0;
    }
    if (digitoCalculado == arregloCedula[0][cedula.size() - 1]) {
        return true;//cedula valida
    }
    else {
        return false;//cedula no valida
    }
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	/*if (argc < 2) {
		cerr << "La cédula debe venir como parámetro por la línea de comandos para: " << argv[0] << endl;
		return 1;
	}*/
	string cedula = "0703452169";//argv[1];
	//cout << "Cédula =" << cedula << endl;
	if (!ValidarTamanio(cedula)) {
		cout << "Tamaño cédula " << cedula << " no válido!!" << endl;
		return 1;
	}
	if (!ValidaSoloNumeros(cedula)) {
		cout << "Cédula " << cedula << " solo debe tener números!!" << endl;
		return 2;
	}
	if (!ValidaTercerDigito(cedula)) {
		cout << "Tercer dígito de cédula " << cedula << " es INVÁLIDO!!" << endl;
		return 3;
	}
	if (!ValidaProvinciaCedula(cedula)) {
		cout << "Cédula " << cedula << " no fue emitida para una provincia válida!!" << endl;
		return 4;
	}
	if (ValidaDigitoVerificador(cedula)) {
		cout << "Cédula " << cedula << " es Válida!!" << endl;
	}
	else {
		cout << "Cédula " << cedula << " es INVÁLIDA!!" << endl;
		return 5;
	}
	return 0;
}
