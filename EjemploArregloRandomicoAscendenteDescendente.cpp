#include <iostream>
#include <stdlib.h>
#include <time.h>
#define TAM_ARR 10
using namespace std;
int main()
{
    srand(time(NULL));
    int arreglo[TAM_ARR];
    for(int i=0;i<TAM_ARR;i++)
    {
    	arreglo[i] = rand() % TAM_ARR;
    	cout << arreglo[i] << " ";
	}
	cout << endl;
    for(int i=0,j=TAM_ARR-1;i<TAM_ARR/2;i++,j--)
    {
    	cout << arreglo[i] << " " << arreglo[j] << " ";
	}
	return 0;
}
