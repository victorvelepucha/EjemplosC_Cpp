#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    float V[6];
    for (int j = 0; j < 6; j++)
    {
        *(V + j) = (j + 1) * 10 + 1;
	}
    cout << setw(15) << "Direccion" << setw(20) << "Contenido" << endl;
    for (int j = 0; j < 6; j++)
    {
        cout << setw(5) << " V+" << j << " = " << V + j;
        cout << setw(15);
        cout << " V[" << j << "] = " << *(V + j) << "\n";
    }
}

