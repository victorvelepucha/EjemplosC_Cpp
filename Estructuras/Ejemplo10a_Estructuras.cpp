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
void ProcesarCliente(Cliente miCliente[])
{
	//char limpiarBuffer[4];
	for(int i=0; i<3; i++)
	{
		cout << "Ingrese el nombre del cliente " << i << " :" ;
		cin.getline(miCliente[i].nombre,30);cin.sync();
		cout << "Ingrese las unidades: ";
		cin >> miCliente[i].unidad;cin.sync();
		cout << "Ingrese el precio: ";
		cin >> miCliente[i].precio;cin.sync();
		cout << "Ingrese el estado (M=Moroso, A=Aprobado, P=Pagado): ";
		cin >> miCliente[i].estado;cin.sync();
		//cin.getline(limpiarBuffer,4);
	}
}

int main()
{
	Cliente cliente[100];
	ProcesarCliente(cliente);
	cout << "Los datos leidos de los clientes son: " << endl;
	for(int i=0; i<3; i++)
	{
		cout << "Cliente=" << cliente[i].nombre << ", unidad=" << cliente[i].unidad << ", precio=" << cliente[i].precio << ", estado=" << cliente[i].estado << endl;
	}
	return 0;
}
