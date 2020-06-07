#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <time.h>
#include "funciones.c"
#include "funcions.h"


int valor;
int frase;

int main(int argc, char *argv[])
{
	int choise;
	int panel;
	
	do
	{

		cout<<"====================================================="<<endl;
        std::cout << "1. Insertar Concursantes" << std::endl;
        std::cout << "2. Preparar Panells" << std::endl;
		std::cout << "3. Inicializar Partida" << std::endl;
		std::cout << "4. Jugar!" << std::endl;
		std::cout << "0. Salir" << std::endl;
		cout<<"====================================================="<<endl;
		std::cin >> choise;


		 
		switch (choise)
		{
		case 1:

		concursante(argc, argv);		
        break;

		case 2:

		do
		{

		cout << "=====================================================" << endl;		
		std::cout << "1. Carregar Dades del fitxer/per defecte" << std::endl;
		std::cout << "2. Introduir panell nou" << std::endl;
		std::cout << "3. Mostrar panells" << std::endl;
		std::cout << "0. Tornar" << std::endl;
		cout << "====================================================="<< endl;		
		std::cin >> panel;

		switch (panel)
		{
		case 1:

		dpanel(valor, frase);


			break;
		case 2:
		npanel(valor, frase);
			break;
		case 3:
			mpanel(valor, frase);
			break;
	
		}

		} while(panel !=0);

		
        break;

		case 3:

		partida (valor, frase);
		
        
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
