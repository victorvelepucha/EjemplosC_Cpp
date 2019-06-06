//Programa que cuenta las vocales de una cadena dada
#include <iostream>
using namespace std;
int main()
{
	int contador=0;
	string cadena = "Escuela Politecnica Nacional";//13 vocales
	for(int i=0; i<28;i++)
	{
		/*
		cout << cadena[i] << endl;
		if(cadena[i] == 'a'|| cadena[i] == 'e'|| cadena[i] == 'i'|| cadena[i] == 'o'|| cadena[i] == 'u'|| cadena[i] == 'A' || cadena[i] == 'E'|| cadena[i] == 'I'|| cadena[i] == 'O'|| cadena[i] == 'U')
		if(
		cadena[i] == 'a' 
		|| cadena[i] == 'e'
		|| cadena[i] == 'i'
		|| cadena[i] == 'o'
		|| cadena[i] == 'u'
		|| cadena[i] == 'A' 
		|| cadena[i] == 'E'
		|| cadena[i] == 'I'
		|| cadena[i] == 'O'
		|| cadena[i] == 'U'
		)
		{
			contador = contador + 1;
			//contador ++;
			//contador += 1;
		}
		
		if( cadena[i] == 'a') 
		{
			contador = contador + 1;
		}
		else if( cadena[i] == 'e') 
		{
			contador = contador + 1;
		}
		else if( cadena[i] == 'i') 
		{
			contador = contador + 1;
		}
		else if( cadena[i] == 'o') 
		{
			contador = contador + 1;
		}
		else if( cadena[i] == 'u') 
		{
			contador = contador + 1;
		}
		else if( cadena[i] == 'A') 
		{
			contador = contador + 1;
		}
		else if( cadena[i] == 'E') 
		{
			contador = contador + 1;
		}
		else if( cadena[i] == 'I') 
		{
			contador = contador + 1;
		}
		else if( cadena[i] == 'O') 
		{
			contador = contador + 1;
		}
		else if( cadena[i] == 'U') 
		{
			contador = contador + 1;
		}
		*/
		switch(cadena[i])
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
				contador++;
				break;
			default:
				contador = 0;
				break;
		}
		
		
	}
	cout << "El total de vocales encontradas son: " << contador;
	return 0;
}



