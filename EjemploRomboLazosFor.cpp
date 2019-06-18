#include <iostream>
using namespace std;
main()
{
	for(int i=0;i<10;i++)
	{
		for(int j=10;j>0;j--)
		{
			if(i<j)
			{
				cout << " ";
			}
			else
			{
				cout << "#";
			}
		}
		for(int j=0;j<5;j++)
		{
			cout << "#";
		}
		for(int j=10;j>0;j--)
		{
			if(i<j)
			{
				cout << "#";
			}
			else
			{
				cout << " ";
			}
		}
		for(int j=0;j<10;j++)
		{
			if(i>j)
			{
				cout << " ";
			}
			else
			{
				cout << "#";
			}
		}
		for(int j=0;j<5;j++)
		{
			cout << "#";
		}
		for(int j=0;j<10;j++)
		{
			if(i>j)
			{
				cout << "#";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
}
