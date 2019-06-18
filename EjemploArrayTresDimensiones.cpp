#include <iostream>

#define DIAS 21
#define HORAS 24
#define MINUTOS 60

using namespace std;

int main()
{
	int temperatura[DIAS][HORAS][MINUTOS];
	int sumaTemperaturaMinutos=0, sumaTemperaturaHoras=0, promedioTemperaturaPorDia=0;
	cout << "Ingrese la temperatura de los 31 dias, de cada hora(24h), y cada minuto (60 min)" << endl;
	enum diaLaborable {lunes=0, martes=1, miercoles=2, jueves=3, viernes=4} ;
	diaLaborable dia = lunes;
	if(dia == lunes)
	{
		cout << "el dia es lunes" << endl;
	}
	for(int i=0;i<DIAS;i++)
	{
		for(int j=0;j<HORAS;j++)
		{
			for(int k=0;k<MINUTOS;k++)
			{
				cin >> temperatura[DIAS][HORAS][MINUTOS];
				sumaTemperaturaMinutos += temperatura[DIAS][HORAS][MINUTOS];
			}
			sumaTemperaturaHoras += sumaTemperaturaMinutos;
		}
		promedioTemperaturaPorDia = sumaTemperaturaHoras / (HORAS*MINUTOS);
		cout << "El promedio de temperatura de dia " << i << " es " << promedioTemperaturaPorDia;
	}
}

