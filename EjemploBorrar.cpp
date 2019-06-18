//EJEMPLO DE VALIDACION DE UNA CEDULA CON ARREGOS BIDIMENCIONALES ( MATRIZ O TABLA). 
#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<string.h>

using namespace std; 

int main(){
string cedula = "1723268965"; // hardcore
//int matriz[3][9]={{1,2,3,4,5,6,7,8,9},{10,11,12,13,14,15,16,17,18},{19,20,21,22,23,24,25,26,27}};
int matriz[3][9]={0};
int filas=3, columnas=9, sumaTotal = 0;
 
 
for(int c=0; c<columnas ; c++){
if(c%2==0)
matriz[0][c]= 2;
else
matriz[0][c]= 1;
matriz[1][c] = cedula[c]-'0';
matriz[2][c] = matriz[0][c]*matriz[1][c];
if(matriz[2][c] >= 10)
matriz[2][c] -= 9;
sumaTotal += matriz[2][c];
}
for(int f=0; f<3; f++){
for(int c=0; c<9;c++){
cout<<matriz[f][c]<<"\t";
}
cout << endl;
}
cout<<endl; 
cout<<"La suma total es: "<<sumaTotal<<endl;
//int digitoVerificador = sumaTotal*9 % 10;
int digitoVerificador = 10 - sumaTotal % 10;
if(digitoVerificador == 10)
cout<<"El Digito verificador es: "<<digitoVerificador<<endl; 
if(digitoVerificador == (int)cedula[9]-48)
cout<<"Cedula valida!"<<endl; 
else
cout<<"Cedula invalida"<<endl; 
system("pause");
return 0; 
}


