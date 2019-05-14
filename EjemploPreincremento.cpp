#include <iostream>
using namespace std;
int main()
{
	int a=3;
	int b;
	int c;
	a += 8;// a = a + 8;
	cout << "a=" << a << endl;
	cout << "a=" << a;
	cout << ", b=" << b; // ojo, b no esta inicializado
	cout << endl;
	b= ++a;
	cout << "a=" << a <<", b=" << b << endl; 
	b = a++;
	cout << "a=" << a <<", b=" << b << endl; 
	for(int i=0; i<10; i++)
	{
		cout << "i=" << i << endl; 		
	}
	return 0;
}
