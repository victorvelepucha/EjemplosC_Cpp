//Ejemplo paso de parametros por referencia en arreglos
#include <iostream>
using namespace std;
void ImprimirValores(int [],int );
int main()
{
	int valores[] = {1,2,3,4};
	int tam = sizeof(valores)/sizeof(valores[0]);
	cout << sizeof(int) << " " << sizeof(valores) << " " <<  sizeof(valores[0])<< " " << tam << endl;
	ImprimirValores(valores,tam);
	return 0;
}

void ImprimirValores(int a[], int tamanio)
{
	int tam = sizeof(a)/sizeof(a[0]);
	cout << sizeof(int) << " " << sizeof(a) << " " <<  sizeof(a[0]) << " " << tam << endl;
	for(int i=0; i< tamanio ;i++)
	{
		cout << a[i] <<" ";
	}
}


