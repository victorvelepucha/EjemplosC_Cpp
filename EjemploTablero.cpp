#include <iostream>
using namespace std;

int main()
{
	for(int i=0; i<8; i++)
	{
		for(int j=0; j<8; j++)
		{
			if(i%2==0)
			{
				if( j%2==0 )
				{
					cout << " ";
				}
				else
				{
					cout << "*";
				}
			}
			else
			{
				if( j%2==0 )
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}

			}
		}
		cout << endl;
	}
}
