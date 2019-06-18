#include <iostream>
#include <cstdlib>
#include <iomanip>
//#define maxf 1
/* TODO (victorvelepucha#3#): Pendiente de completar */
//#define maxc 5


using namespace std;

/* TODO (#1#): Pendiente para pruebas */
int main()
{
	const int maxf=2;
	const int maxc=5;
    float a[maxf] [maxc];
    int f, c;
    // escrir el array
    for(f = 0; f < maxf; f++)
        for(c = 0; c < maxc; c++)
            cin >> a[f][c];

    // escribir el array
    for(f = 0; f < maxf; f++)
    {
        for(c = 0; c < maxc; c++)
        {
            cout << setw(10) << fixed <<setprecision(2) << a[f][c] ;
		}
        cout << endl;
    }

    system("PAUSE");
    return EXIT_SUCCESS;
}
