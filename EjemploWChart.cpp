#include <iostream>

using namespace std;

void Power (int x, int y)
{
	int result;
	result = 1;
	while (y > 0)
	{
		result = result * x;
		y--;
	}
}


int main()
{
	wchar_t caracter = '�';
	cout << caracter;
	return 0;
}
