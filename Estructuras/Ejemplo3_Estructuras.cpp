#include <iostream>

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
	return 0;
}
