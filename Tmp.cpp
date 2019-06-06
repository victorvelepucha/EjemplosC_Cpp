#include <iostream>
#include <ctime> // for time function
#include <cstdlib> // for rand and srand functions
using namespace std;

int main()
{
// Generate a lottery
char opcion;
while(1)
{
	system("cls");
	cout << "------PROGRAMA DE LOTERIA------" << endl;
	cout << "Reglas: " << endl;
	cout << "Debe ingresar 2 numeros solamente" << endl;
	cout << "Reglas: Debe ingresar 2 numeros solamente" << endl;
	
	srand(time(0));
	int lottery = rand() % 100;
	
	// Prompt the user to enter a guess
	cout << "Ingrese un numero de dos digitos: ";
	int guess;
	cin >> guess;
	
	// Get digits from lottery
	int lotteryDigit1 = lottery / 10;
	int lotteryDigit2 = lottery % 10;
	
	// Get digits from guess
	int guessDigit1 = guess / 10;
	int guessDigit2 = guess % 10;
	
	cout << "El numero de loteria generado es: " << lottery << endl;
	
	// Check the guess
	if (guess == lottery)
	cout << "Acerto!!: y gano $10,000" << endl;
	else if (guessDigit2 == lotteryDigit1 && guessDigit1 == lotteryDigit2)
	cout << "Aunque en desorden coinciden los digitos: usted gano $3,000" << endl;
	else if (guessDigit1 == lotteryDigit1 
			|| guessDigit1 == lotteryDigit2
			|| guessDigit2 == lotteryDigit1
			|| guessDigit2 == lotteryDigit2)
		cout << "Al menos un digito coincidio: usted gano $1,000" << endl;
	else
		cout << "Lo lamento, ningun numero coincidio." << endl;
	cout << "Presione C para seguir jugando o S para finalizar." << endl;
	cin >> opcion;
	if(opcion == 'S' || opcion =='s')
		break;
}
	cout << "Fin del programa" << endl;
	return 0;
	
}

