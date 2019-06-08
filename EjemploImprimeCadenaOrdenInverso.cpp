//Programa que imprime en pantalla una cadena en orden inverso
#include <iostream>
#include<string.h>
#define ESPACIO ' '
using namespace std;
int main()
{
	int contador=0;
	//string cadena = "Escuela Politecnica Nacional";//3 palabras
	char cadena[] = "Escuela Politecnica Nacional";//3 palabras
	//char cadena[] = "Escuela EPN";//3 palabras
	//int tamanio = cadena.length();
	int tamanio = sizeof(cadena);
	char cadena2[tamanio];
	//char *cadena3;
	//cadena3 = &cadena2;
	
	strcpy(cadena2,cadena);
	
	cout << tamanio << endl;
	for(int i=tamanio-1; i>=0;i--)
	{
		cout << cadena2[i] ;
	}
	return 0;
}



