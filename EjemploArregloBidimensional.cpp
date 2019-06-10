//Ejemplo de validacion cedula con arreglos bidimensionales (matriz o tabla)
#include <iostream>
using namespace std;
int main()
{
	string cedula;// = "0703452169";//hardcode
	//string cedula = "1713017570";//hardcode
	cout << "Ingrese la cedula: ";
	cin >> cedula;
	//cin.getline(cedula,10,"\n");
	cout << "Cedula=" << cedula << endl;
	//int matriz[3][9]={{1,2,3,4,5,6,7,8,9},{10,11,12,13,14,15,15,17,18},{19,20,21,22,23,24,25,26,27}};
	int matriz[3][9]={0};
	int filas=3, columnas=9,sumaTotal=0;
	
	for(int c=0;c<columnas;c++)
	{
		if(c%2==0)
			matriz[0][c]= 2;
		else
			matriz[0][c]= 1;
		matriz[1][c] = cedula[c]-'0';
		matriz[2][c] = matriz[0][c] * matriz[1][c];
		if (matriz[2][c] >= 10)
			matriz[2][c] -=9;
		//matriz[2][c] = (matriz[0][c] * matriz[1][c]>10?matriz[0][c] * matriz[1][c] - 9:matriz[0][c] * matriz[1][c]);
		sumaTotal += matriz[2][c];
	}
	
	
	for(int f=0; f<filas; f++)
	{
		for(int c=0; c<columnas;c++)
		{
			//matriz[f][c] = 0;
			cout << matriz[f][c] << "\t";
		}
		cout << endl;
	}
	cout << "La suma total es: " << sumaTotal  << endl;
	//int digitoVerificador = sumaTotal *9 % 10;
	int digitoVerificador = 10 - sumaTotal % 10;
	if(digitoVerificador==10)
		digitoVerificador=0;
	cout << "El digito verificador calculado es: " << digitoVerificador << endl;
	//cout << (int)cedula[9]-48 << endl;
	if(digitoVerificador == (int)cedula[9]-48)
		cout << "Cedula valida!!" << endl;
	else
		cout << "Cedula INVALIDA!!" << endl;
	
	return 0;
}
