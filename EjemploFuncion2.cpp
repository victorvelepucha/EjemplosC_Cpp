
#include<iostream>
using namespace std;

void Saludar();
float calculardoble(float num);
void triplicar(float &num);

void Saludar() {
	cout << "Hola mundo!" << endl;
}

float calculardoble(float num) {
	float res;
	// retorna el doble
	res = num*2;
	return res;
}

void triplicar(float &num) {
	// modifica la variable duplicando su valor
	num = num*3;
}

// proceso principal, que invoca a las funciones antes declaradas
int main() {
	float x;
	cout << "Llamada a la funcion Saludar:" << endl;
	// como no recibe argumentos pueden omitirse los par�ntesis vacios
	Saludar();
	cout << "Ingrese un valor num�rico para x:" << endl;
	cin >> x;
	cout << "Llamada a la funci�n CalcularDoble (pasaje por valor)" << endl;
	cout << "El doble de " << x << " es " << calculardoble(x) << endl;
	cout << "El valor original de x es " << x << endl;
	cout << "Llamada a la funci�n Triplicar (pasaje por referencia)" << endl;
	triplicar(x);
	cout << "El nuevo valor de x es " << x << endl;
	return 0;
}

