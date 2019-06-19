#include <iostream>
#include <string.h>

using namespace std;

struct Cliente 
{
	char nombre[30];
	int unidad;
	double precio;
	char estado;
};
//Paso de parametros por valor
Cliente ProcesarCliente(Cliente miCliente)
{
	if( strlen(miCliente.nombre) == 0 )
	{
		cout << "Ingrese el nombre del cliente: ";
		cin.getline(miCliente.nombre,30);
		cout << "Ingrese las unidades: ";
		cin >> miCliente.unidad;
		cout << "Ingrese el precio: ";
		cin >> miCliente.precio;
		cout << "Ingrese el estado (M=Moroso, A=Aprobado, P=Pagado): ";
		cin >> miCliente.estado;
	}
	return miCliente;
}

int main()
{
	Cliente cliente;
	strcpy(cliente.nombre,"Victor");
	Cliente respuestaCliente = ProcesarCliente(cliente);
	cout << "Los datos leidos del cliente son: " << endl;
	cout << "Cliente=" << respuestaCliente.nombre << ", unidad=" << respuestaCliente.unidad << ", precio=" << respuestaCliente.precio << ", estado=" << respuestaCliente.estado << endl;
	return 0;
}
