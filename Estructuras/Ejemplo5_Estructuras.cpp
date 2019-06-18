#include <iostream>
#include <string.h>

using namespace std;
struct Cliente
{
	char nombre[20];
	int numUnidades;
	float precio;
	char estado;
} cliente0 = {"Victor Velepucha",11,12.45,'M'};

int main()
{
	Cliente cliente1 = {"Adrian Eguez", 12, 11.11, 'P'};
	Cliente cliente2 = {"Mirian Nicolalde", 9, 10.37,'A'};
	Cliente cliente3, cliente4;
	Cliente listadoClientes[100];
	cliente4 = cliente3 = cliente2 = cliente1;
	cout << "Los valores del cliente0 son: " << cliente0.nombre << ", " << cliente0.numUnidades << ", " << cliente0.precio << ", " << cliente0.estado << endl;
	cout << "Los valores del cliente1 son: " << cliente1.nombre << ", " << cliente1.numUnidades << ", " << cliente1.precio << ", " << cliente1.estado << endl;
	cout << "Los valores del cliente2 son: " << cliente2.nombre << ", " << cliente2.numUnidades << ", " << cliente2.precio << ", " << cliente2.estado << endl;
	int unidades = cliente1.numUnidades;
	strcpy(cliente3.nombre,"Maria Perez");
	cliente3.numUnidades = 15;
	cliente3.precio = 6.78;
	cliente3.estado = 'P';
	cout << "Los valores del cliente3 son: " << cliente3.nombre << ", " << cliente3.numUnidades << ", " << cliente3.precio << ", " << cliente3.estado << endl;

	system("pause");
	return 0;
}
