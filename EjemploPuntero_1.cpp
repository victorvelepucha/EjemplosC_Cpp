#include <stdio.h>

#define PI 3.1416

const float pi = 3.1416;

//#include <iostream>
//using namespace std;
main()
{
	
	//pi = 5;
	
	int n = 75;
	int* p = &n; /* p variable puntero, tiene direccion de n */
	printf("n = %d, &n = %p \n",n, &n, p);
	printf("p = %p, &p = %p, *p = %d \n",p, &p, *p);
}

