#include <cstdlib>
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;
struct Cliente
{
    char nombre[23];
    int numUnidades;
    float precio;
    char estado;
};

void LeerDatosCliente(Cliente listado[])
{
    char buffer[4]; //buffer para limpiar entrada de cin
    for (int i = 0; i < 3; i++)
    {
        cout << "Introduzca nombre del cliente: ";
        cin.getline(listado[i].nombre, 20);
        cout << "Introduzca el numero de unidades solicitadas: ";
        cin >> listado[i].numUnidades;
        cout << "Introduzca el precio de cada unidad: ";
        cin >> listado[i].precio;
        cout << "Introduzca el estado del cliente (M=Moroso, A=Atrasado, P=Pagado): ";
        cin >> listado[i].estado;
        cin.getline(buffer, 4); // limpiar buffer de entrada por número
    }
}

void GrabarCliente(Cliente listado[])
{
    char nombreArchivo[] = "cliente.dat"; 
    ofstream archivoEscritura;
    // Crear o sobreescribir el archivo archivoEscritura en binario
    archivoEscritura.open(nombreArchivo, ios::out | ios::binary);
    if(!archivoEscritura.good()) {
        cout <<"El fichero " << nombreArchivo << " no se puede crear\n";
        archivoEscritura.close();
        exit (1);
    }
    for ( int i = 0; i < 11; i++ ){
        archivoEscritura.write(reinterpret_cast< const char * >( &listado[i] ), sizeof( Cliente ) ); // escritura de los bytes leídos
    }
    archivoEscritura.close();
}

void RecuperarCliente(Cliente listado[])
{
    char nombreArchivo[] = "cliente.dat"; 
    Cliente *p_data2 = new Cliente[1];
// Lectura de archivoEscritura en binario
    ifstream archivoEntrada( nombreArchivo, ios::in | ios::binary );
    if ( !archivoEntrada ){
        cerr << "No se pudo abrir el archivo." << endl;
        exit( 1 );
    }
    cout << left << setw( 20 ) << "cliente" << setw( 10 ) << "Unidades" << setw( 10 ) 
        << "Precio" << left << setw( 10 ) << right << "Estado" << endl; 
    while ( 1 ) {
        archivoEntrada.read(reinterpret_cast<char*>( &p_data2[0] ), sizeof(Cliente) );
        if( archivoEntrada.eof() ) break ;
        cout << left << setw( 20 ) << p_data2[0].nombre << setw( 10 ) << p_data2[0].numUnidades << setw( 10 ) 
			<< left << setprecision( 2 ) << fixed << showpoint << p_data2[0].precio << setw( 10 ) << right << p_data2[0].estado << endl;
    }
    archivoEntrada.close();
    delete[] p_data2;
}

int main()
{
    Cliente *listadoClientes = new Cliente[100];
    LeerDatosCliente(listadoClientes);
    GrabarCliente(listadoClientes);
    RecuperarCliente(listadoClientes);
    cout << "Los datos leidos son: " << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Cliente " << i << " : " << listadoClientes[i].nombre;
        cout << ", " << listadoClientes[i].numUnidades;
        cout << ", " << listadoClientes[i].precio;
        cout << ", " << listadoClientes[i].estado;
        cout << endl;
    }
    delete[] listadoClientes;
    system("PAUSE");
    return EXIT_SUCCESS;
}


