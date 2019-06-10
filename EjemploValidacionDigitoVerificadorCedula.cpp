//Ejemplo validacion digito verificador con arreglos bidimensionales (tablas, matrices)
#include <iostream>
//#include <string> 
#include <stdlib.h>
using namespace std;
int main()
{
	string cedula = "0703452169";
	for(int i=0;i<cedula.length();i++)
		cout << cedula[i] << "\t";
		cout << endl;
		
	int cedulaEnNumeros[10];
	//cedulaEnNumeros[0] = cedula[0];
	//....
	//cedulaEnNumeros[9] = cedula[9];
	//cout << endl;
	for(int i=0;i<sizeof(cedulaEnNumeros)/sizeof(cedulaEnNumeros[0]);i++)
	{
		char val[1] = {cedula[i]};
		cedulaEnNumeros[i] = atoi(val);
		cout << cedulaEnNumeros[i] << "\t";
	}
	cout << endl;
	
		
	int validadorCedula[3][10]={{0},{0},{0}};
	int sumaTotal=0;
	/*for(int i=0; i<cedula.length()-1; i++ )
	{
		if(i%2==0)
		{
			validadorCedula[0][i] = 2;
		}
		else
		{
			validadorCedula[0][i] = 1;
		}
		validadorCedula[1][i] = (int)cedula[i]-48;
		validadorCedula[2][i] = validadorCedula[0][i] * validadorCedula[1][i];
		if( validadorCedula[2][i] >=10 )
		{
			validadorCedula[2][i] -= 9;
		}
		sumaTotal += validadorCedula[2][i];
	}*/
	for (int i=0; i< 3; i++)
	{
		for(int j=0; j<cedula.length()-1; j++ )
		{
			cout << validadorCedula[i][j] << "\t";
		}
		cout << endl;
	}
	/*
	cout << "La suma total es: " << sumaTotal << endl;
	if( sumaTotal * 9 % 10 == (int) cedula[9] -48 )
	{
		cout << "Cedula valida";
	}
	else
	{
		cout << "Cedula invalida, no pasa la validacion de digito de chequeo";
	}*/
	return 0;	
}
