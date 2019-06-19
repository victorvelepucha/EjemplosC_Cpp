#include <iostream>
#include <string.h>
//#include <stdlib.h>
#include <cstdlib>

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
	Cliente cliente3;
	Cliente listadoClientes[100];
	cliente3 = cliente2 = cliente1;
	cout << "Los valores del cliente0 son: " << cliente0.nombre << ", " << cliente0.numUnidades << ", " << cliente0.precio << ", " << cliente0.estado << endl;
	cout << "Los valores del cliente1 son: " << cliente1.nombre << ", " << cliente1.numUnidades << ", " << cliente1.precio << ", " << cliente1.estado << endl;
	cout << "Los valores del cliente2 son: " << cliente2.nombre << ", " << cliente2.numUnidades << ", " << cliente2.precio << ", " << cliente2.estado << endl;
	int unidades = cliente1.numUnidades;
	strcpy(cliente3.nombre,"Maria Perez");
	cliente3.numUnidades = 15;
	cliente3.precio = 6.78;
	cliente3.estado = 'P';
	cout << "Los valores del cliente3 son: " << cliente3.nombre << ", " << cliente3.numUnidades << ", " << cliente3.precio << ", " << cliente3.estado << endl;
	//Asignacion con punteros y malloc (lenguaje C)
    Cliente *cliente4;//Cliente *cliente4 = (Cliente*)malloc(sizeof(Cliente));
    cliente4 = (Cliente*)malloc(sizeof(Cliente));
    strcpy(cliente4->nombre ,"Luis Velez"); //Para copia de cadenas
    cliente4->numUnidades = 10;
    cliente4->precio = 14.56;
    cliente4->estado='P';//Estado (M=Moroso, A=Atrasado, P=Pagado)
    cout << "Los datos del cliente4 son: " << cliente4->nombre << ", " << cliente4->numUnidades << ", " << cliente4->precio << ", " << cliente4->estado << endl;
    free(cliente4);
	//Asignacion con punteros y NEW (lenguaje C++)
    Cliente *cliente5 = new Cliente;
    strcpy(cliente5->nombre ,"Miriam Nicolalde"); //Para copia de cadenas
    cliente5->numUnidades = 30;
    cliente5->precio = 8.40;
    cliente5->estado='M';//Estado (M=Moroso, A=Atrasado, P=Pagado)
    cout << "Los datos del cliente5 son: " << cliente5->nombre << ", " << cliente5->numUnidades << ", " << cliente5->precio << ", " << cliente5->estado << endl;
    delete cliente5;
	Cliente cliente6;
	cout << "Cliente :";
    cin.getline(cliente6.nombre, 20); // getline lee retorno de carro no leído en cin
    //cin >> cliente6.nombre;
	cout << "Unidad :";
    cin >> cliente6.numUnidades;
    cout << "Precio :";
    cin >> cliente6.precio;
    cout << "Estado (M=Moroso, A=Atrasado, P=Pagado) :";
    cin >> cliente6.estado;
    cout << "Los datos del cliente6 son: " << cliente6.nombre << ", " << cliente6.numUnidades << ", " << cliente6.precio << ", " << cliente6.estado << endl;
	system("pause");
	return 0;
}
