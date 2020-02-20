#include<iostream>

using namespace std; 

int main() {
	int a, b, c, d, e, f, g, h, i, j, suma=0 ;
	cout<< "Ingrese 10 numeros enteros: "<<endl;
	cout<<"\n";
	cin>>a;
	cout<<"\n";
	cin>>b;
	cout<<"\n";
	cin>>c;
	cout<<"\n";
	cin>>d;
	cout<<"\n";
	cin>>e;
	cout<<"\n";
	cin>>f;
	cout<<"\n";
	cin>>g;
	cout<<"\n";
	cin>>h;
	cout<<"\n";
	cin>>i;
	cout<<"\n";
	cin>>j;
	
	cout<<"Los numeros ingresados fueron: "<<a<<" , "<<b<<" , "<<c<<" , "<<d<<" , "<<e<<" , "<<f<<" , "<<g<<" , "<<h<<" , "<<i<<" , "<<j<<" , "<<endl;
	suma = a + b + c + d + e + f + g + h + i + j;
	
	cout<<"La suma de las cantidades ingresadas es"<<suma<<endl;
	
	if (a>b&&a>c&&a>d&&a>e&&a>f&&a>g&&a>h&&a>i&&a>j)
	{
		cout<<"El numero mayor es: "<<a<<endl;
	}else if(b>a&&b>c&&b>d&&b>e&&b>f&&b>g&&b>h&&b>i&&b>j)
	{
		cout<<"El numero mayor es: "<<b<<endl;
	}else if(c>a&&c>b&&c>d&&c>e&&c>f&&c>g&&c>h&&c>i&&c>j)
	
	{
		cout<<"El numero mayor es: "<<c<<endl;
	}else if(d>a&&d>c&&d>b&&d>e&&d>f&&d>g&&d>h&&d>i&&d>j)
	
	{
		cout<<"El numero mayor es: "<<d<<endl;
	}else if(e>a&&e>c&&e>d&&e>b&&e>f&&e>g&&e>h&&e>i&&e>j)
	
	{
		cout<<"El numero mayor es: "<<e<<endl;
	}else if(f>a&&f>c&&f>d&&f>e&&f>b&&f>g&&f>h&&f>i&&f>j)
	
	{
		cout<<"El numero mayor es: "<<f<<endl;
	}else if(g>a&&g>c&&g>d&&g>e&&g>f&&g>b&&g>h&&g>i&&g>j)
	
	{
		cout<<"El numero mayor es: "<<g<<endl;
	
	}else if(h>a&&h>c&&h>d&&h>e&&h>f&&h>b&&h>b&&h>i&&h>j)
	
	{
		cout<<"El numero mayor es: "<<h<<endl;
	}else if(i>a&&i>c&&i>d&&i>e&&i>f&&i>g&&i>h&&i>b&&i>j)
	
	{
		cout<<"El numero mayor es: "<<i<<endl;
	}else if(j>a&&j>c&&j>d&&j>e&&j>f&&j>g&&j>h&&j>i&&j>b)
	
	{
		cout<<"El numero mayor es: "<<j<<endl;
	}



	return 0;
}

