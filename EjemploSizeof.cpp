#include <iostream>
#include <stdio.h>
#include <float.h>

using namespace std;

int main()
{
	cout << sizeof(int) << endl;
	cout << sizeof(long) << endl;
	cout << sizeof(float) << endl;
	cout << sizeof(double) << endl;
	cout << FLT_MIN << endl;
	
	cout << "Mi mama dice \'que te levantes\"" << endl;
	//cout << "Hola " << endl << "mundo";
	printf("%20.6s","Hola mundo");
	
	//printf("El color es: %c, el numero es: %f, el numero largo es: %d",'r',12.43,12345678789);
	
	return 0;
}
