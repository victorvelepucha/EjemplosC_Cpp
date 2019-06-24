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

void LeerDatosCliente(Cliente miCliente[]);
void MostrarDatosCliente(Cliente cliente[]);

int main()
{
	//Cliente cliente[100];
	Cliente *cliente = new Cliente[100];
	LeerDatosCliente(cliente);
	MostrarDatosCliente(cliente);
	delete[] cliente;
	return 0;
}

//Paso de parametros por valor
void LeerDatosCliente(Cliente miCliente[])
{
	char limpiarBuffer[4];
	for(int i=0; i<3; i++)
	{
		cout << "Ingrese el nombre del cliente " << i << " :" ;
		cin.getline(miCliente[i].nombre,30);
		cout << "Ingrese las unidades: ";
		cin >> miCliente[i].unidad;
		cout << "Ingrese el precio: ";
		cin >> miCliente[i].precio;
		cout << "Ingrese el estado (M=Moroso, A=Aprobado, P=Pagado): ";
		cin >> miCliente[i].estado;
		cin.getline(limpiarBuffer,4);
	}
	//delete[] miCliente; 
}

void MostrarDatosCliente(Cliente cliente[])
{
	//Cliente *cliente = new Cliente[100];
	cout << "Los datos leidos de los clientes son: " << endl;
	for(int i=0; i<3; i++)
	{
		cout << "Cliente=" << cliente[i].nombre << ", unidad=" << cliente[i].unidad << ", precio=" << cliente[i].precio << ", estado=" << cliente[i].estado << endl;
	}
}

