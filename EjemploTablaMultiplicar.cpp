#include<iostream>
#include <iomanip>
using namespace std;

int main() 
{
	int a;
	int i;
	cout << "Ingrese un numero a multiplicar: ";
	cin >> a;
	for (i=1; i<=12; i++) 
	{
		cout << setw(2) << a << setw(3) << " x " << setw(3) << i << " " << " = "<< a*i << endl;
	}
	double valor1 = 12.45890765;
	cout << endl;
	cout << showpoint << setprecision(10) << valor1;
	return 0;
}

