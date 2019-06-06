#include <iostream>
using namespace std;

void PrimerTriangulo();

const char a = '*';
const char b = ' ';

int main()
{
   	PrimerTriangulo();

    return 0;
}
 
void PrimerTriangulo()
{
	for(int i=0; i< 10; i++)//filas
	{
		for(int j=0; j< 10; j++)//columnas
		{
			if( j > i )
			{
				cout << b;
			}
			else
			{
				cout << a;
			}
			
		}
		cout << endl;
	}
}
