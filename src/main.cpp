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
struct concursante
{
	char nom[15];
	int dinero;
};

int main()
{
	int choise;
	int panel;
	//char ruleta [12][1];
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
		std::cout << "0. Tornar" << std::endl;
		std::cin >> panel;

		switch (panel)
		{
		case 1:
			break;
		case 2:
			break;
		case 3: 
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
