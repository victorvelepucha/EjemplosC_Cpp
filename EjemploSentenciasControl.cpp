#include <iostream>
#include <conio.h>

using namespace std;
//algoritmo que sume los 30 primero numeros, excepto los multiplos de 5
//435, 360
int main(int argc, char** argv) 
{
	int acumulador = 0;
	cout << "Programa que suma los 30 primeros numeros" << endl;
	for(int i=1; i<30; i++)
	{
		/*if( i%5 == 0)
		{
			continue;
		}*/
		/*if( i%15 == 0)
		{
			break;
		}*/
		if( i%15 == 0)
		{
			return 15;
		}
		acumulador += i;
	}
	cout << "El valor sumado es: " << acumulador;
	getch();
	return 0;
}
