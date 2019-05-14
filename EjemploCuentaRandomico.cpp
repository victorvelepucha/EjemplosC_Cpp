#include <stdio.h>
#include<time.h>
#include<stdlib.h>

main()
{
    int num, c;
    srand(time(NULL));
    num = 10 + rand() % (21 - 10);
    printf("Valor randomico asignado entre 10-20 : %d\n", num);
    for(c = 1; c <= 20; c++)
    {
    	if(c == num)
		{
			printf("Valor encontrado luego de %i iteraciones\n",c);
			break;
		}
	}
	system("pause");
}

