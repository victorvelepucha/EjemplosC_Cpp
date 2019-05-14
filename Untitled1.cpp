#include<iostream> 
#include <stdlib.h> 
#include <conio.h> 
#include<cstdlib> 
using namespace std; 
 
float suma(float num1, float num2); 
float resta(float num1, float num2); 
float multiplicacion(float num1, float num2); 
float division(float num1, float num2); 
 
float suma(float num1, float num2) { 
float resultado; 
resultado = num1+num2; 
cout << "la suma es igual a " << resultado << endl; 
return resultado; 
} 
 
float resta(float num1, float num2) { 
float resultado; 
resultado = num1-num2; 
cout << "la resta es igual a " << resultado << endl; 
return resultado; 
} 
 
float multiplicacion(float num1, float num2) { 
float resultado; 
resultado = num1*num2; 
cout << "la multiplicacion es igual a " << resultado << endl; 
return resultado; 
} 
 
float division(float num1, float num2) { 
float resultado; 
resultado = num1/num2; 
cout << "la division es igual a " << resultado << endl; 
return resultado; 
} 
 
int main() { 
float a; 
float b; 
char  menu; 
float reslult; 
 
while (menu != 'F' || menu != 'f') 
{ 
system ("cls");
cout << "Menu de opciones" << endl; 
cout << "   a. Suma" << endl; 
cout << "   b. Resta" << endl; 
cout << "   c. Multiplicacion" << endl; 
cout << "   d. Division" << endl; 
cout << "   F. Salir" << endl; 
 
cout << "Elija una opcion (a-d) o F para salir: " << endl; 
cin >> menu; 
 
switch (menu) { 
case 'a': 
case 'A': 
cout << "ingrese un numero" << endl; 
cin >> a; 
cout << "ingrese un numero" << endl; 
cin >> b; 
reslult = suma(a,b); 
break; 
case 'b': 
cout << "ingrese un numero" << endl; 
cin >> a; 
cout << "ingrese un numero" << endl; 
cin >> b; 
reslult = resta(a,b); 
break; 
case 'c': 
cout << "ingrese un numero" << endl; 
cin >> a; 
cout << "ingrese un numero" << endl; 
cin >> b; 
reslult = multiplicacion(a,b); 
break; 
case 'd': 
cout << "ingrese un numero" << endl; 
cin >> a; 
cout << "ingrese un numero" << endl; 
cin >> b; 
reslult = division(a,b); 
break; 
case 'F': 
case 'f': 
break; 
default: 
cout << "Opción no valida" << endl; 
 
} 
cout << "Presione enter para continuar" << endl; 
getch(); 
 
} 
 
return 0; 
}

