#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <time.h>
#include "funciones.c"
#include "funcions.h"
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
	int panel;
	int panel2;
	int var = 0;
	int lleno = 0;
	char ruleta [12][1];
	do
	{


        std::cout << "1. Insertar Concursantes" << std::endl;
        std::cout << "2. Preparar Panells" << std::endl;
		std::cout << "3. Inicializar Partida" << std::endl;
		std::cout << "4. Jugar!" << std::endl;
		std::cout << "0. Salir" << std::endl;
		std::cin >> choise;

		switch (choise)
		{
		case 1:
		
		
        break;

		case 2:

		do
		{

		
		std::cout << "1. Carregar Dades del fitxer/per defecte" << std::endl;
		std::cout << "2. Introduir panell nou" << std::endl;
		std::cout << "3. Mostrar panells" << std::endl;
		std::cout << "4. Tornar" << std::endl;

		switch (panel2)
		{
		case 1:
			break;
		case 2:
			break;
		case 3: 
			break;
		case 4:
			break;
		}
		} while(panel !=0);

		
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
