#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	if (argc < 2) {
        cerr << "Enviar cedula por linea de comandos desde " << argv[0] << endl;
        return 1;
    }
	string cedula = argv[1];
    cout << "Cedula=" << cedula << endl;
    return 0;
}
