#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <time.h>

using namespace std;

int concursante(int argc, char *argv[]){

struct concursante
{
	char nom[15];
	int dinero;
    int edat;
};

struct concursante concursante;


cout << "Dime el Nombre del concursante " << std::endl;

cin >> concursante.nom;

std::cout << "Dime la edat" << std::endl;

cin >> concursante.edat;

std::cout << "Saldo actual:" << concursante.dinero <<"€" <<std::endl;


return 0;
}
