#include <stdlib.h>
#include <stdio.h>
#include <time.h>
struct Panel
{
	int valor;
	int Pos;
};
struct Jugador
{
	char valor;
	int cuantitat;
};
struct Jugador Jugador[10];

int main(int argc, char *argv[])
{
	int choise;
	int var = 0;
	int lleno = 0;
	struct panel aux;
	do
	{


        std::cout << "1. Insertar Jugador" << std::endl;
        std::cout << "2. Mostrar Jugadores " << std::endl;
		std::cout << "3. Inicializar Partida" << std::endl;
		std::cout << "4. Jugar!" << std::endl;

		scanf ("%d",&choise);
		switch (choise)
		{
		case 1:
		
		
        break;

		case 2:

		
        break;

		case 3:
		
        
		break;

		case 4:

			
        break;

		case 5:

		break;

		case 6:
        
			break;
		}

	} while (choise != 0);
}
