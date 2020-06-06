#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <string>

using namespace std;
string panel[15];
string spanel[2]= {"La Situacion desesperada de estar encerrado ", "El deseo de romper las cadenas y ser liberado"};



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


};

void dpanel(int valor, int frase){


std::cout << "Modulo base cargado fixeros omitidos..." << std::endl;




};


int npanel(int valor, int frase){


    // La primera posicion a introducir no funciona de 5 -> solo 4 
    int cnt;
    std::cout << "Cuantos paneles quieres introducir?" << std::endl;
    cin >> cnt;
    for (size_t i = 0; i < cnt; i++)
    {
    
    std::cout << "Dime los nuevos panels a introducir:" << std::endl;
    std::getline(std::cin, panel[i]);
    }
    



};

    int mpanel(int valor, int frase){




    for (size_t i = 0; i < 15; i++)
{

    std::cout <<"|"<<i<<"." << panel[i] <<"|"<< endl;
}
    for (size_t i = 0; i < 2; i++)
    {
        std::cout << "|" << spanel[i] << "|" << std::endl;
        
    }
};