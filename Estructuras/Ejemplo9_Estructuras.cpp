#include <iostream>

using namespace std;

struct Cliente 
{
	char nombre[30];
	int unidad;
	double precio;
	char estado;
};
//Paso de parametros por valor
//void ProcesarCliente(Cliente miCliente)
//{
//	cout << "Ingrese el nombre del cliente: ";
//	cin.getline(miCliente.nombre,30);
//	cout << "Ingrese las unidades: ";
//	cin >> miCliente.unidad;
//	cout << "Ingrese el precio: ";
//	cin >> miCliente.precio;
//	cout << "Ingrese el estado (M=Moroso, A=Aprobado, P=Pagado): ";
//	cin >> miCliente.estado;
//}
//Paso de parametros por referencia
void ProcesarCliente(Cliente &miCliente)
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
int main()
{
	Cliente cliente;
	ProcesarCliente(cliente);
	cout << "Los datos leidos del cliente son: " << endl;
	cout << "Cliente=" << cliente.nombre << ", unidad=" << cliente.unidad << ", precio=" << cliente.precio << ", estado=" << cliente.estado << endl;
	return 0;
}
