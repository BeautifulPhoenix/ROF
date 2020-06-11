#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

string panel[15];
string rpanel[2]={"Estoy encerrado "};
string spanel[30]=/*{"ESTOYENCERRADO"};*/{"E","S", "T", "O", "Y", "E", "N", "C","E", "R", "R", "A", "D","O", "\0"};
string Pista [2]={"Confinamiento"};
string ruleta [28][1]= {"25", "50", "75", "25", "50", "75", "25", "50", "75", "25", "50", "75", "25", "50", "75", "25", "50", "75", "100", "150", "200", "100", "150", "Bancarrota", "Comodin", "Todas las vocales", "X2", "1/2"};
string ruleta2 [28]{"25", "50", "75", "25", "50", "75", "25", "50", "75", "25", "50", "75", "25", "50", "75", "25", "50", "75", "100", "150", "200", "100", "150"};
string solucion [30];
//string ruleta [28][1];
int num = rand() % 28; 
int choise;
int dado= rand() % 2;
int i;
int z;
int comodin;

string cp;
int eur;



struct concursante
{
	char nom[15];
	int dinero=0;
    int edat;
};


int concursante(int argc, char *argv[]){



struct concursante Jugador;


cout << "Dime el Nombre del concursante "<<endl;

cin >> Jugador.nom;

std::cout << "Dime la edat" << std::endl;

cin >> Jugador.edat;

std::cout << "Saldo actual:" << Jugador.dinero <<"€" <<std::endl;


};

void dpanel(int valor, int frase){


std::cout << "Modulo base cargado fixeros omitidos..." << std::endl;




};


int npanel(int valor, int frase){


    // La primera posicion a introducir no funciona de 5 -> solo 4 
    int cnt;
    string npanel[15];
    std::cout << "Cuantos paneles quieres introducir?" << std::endl;
    cin >> cnt;
    
    
    for (size_t i = 0; i < cnt; i++)
    {
    std::cout << "Dime los nuevos panels a introducir:" << std::endl;
    std::getline(std::cin, panel[i]);
    }
    



};

    int mpanel(int valor, int frase){




    for (size_t i = 0; i < 16; i++)
{

    std::cout <<"|"<<i<<"." << rpanel[i] <<"|"<< endl;
    cout <<"|" << panel[i]<<"|"<<endl;
}
    for (size_t i = 0; i < 2; i++)
    {
        std::cout << "|" << spanel[i] << "|" << std::endl;
        
    }
    
};


int ipartida (int valor, int frase){



do
{
    	cout<<"====================================================="<<endl;
        std::cout << "1. Probar ruleta" << std::endl;
		std::cout << "2. Cargar/Mostrar datos" << std::endl;
		std::cout << "0. Salir" << std::endl;
		cout<<"====================================================="<<endl;
		std::cin >> choise;

switch (choise)
{
  case 1:

    num = rand() % 28; 

    std::cout << "Giras la Ruleta" << std::endl;
    //int c = getchar();
    std::cout << "...... te a tocado la posicion: " << num<< std::endl;
    std::cout << " Te a tocado: " << ruleta[num][1] << std::endl;

  
    break;


    break;

case 2:

    std::cout << "Mostrando array ruelta y posible panel" << std::endl;

    for (int i= 0; i< 28; i++)
    {
        std::cout << "|"<< ruleta[i][1] << "|"<< std::endl;

        
    }
    
    std::cout << "a tocado el panel: " <<dado << std::endl;
    std::cout << " "<< spanel[dado] << std::endl;
    std::cout << "Pista: "<< Pista[dado] << std::endl;





    break;




 }
    
} while(choise != 0);

}


int partida(int valor, int frase){

    struct concursante concursante;


    std::cout << concursante.nom <<" Bienvenido a la Ruleta de la Suerte " <<std::endl;

    cout << "La Pista Es: " <<endl;
    std::cout << " "<< Pista[dado] << std::endl;


   /* num = rand() % 28; 

    std::cout << "Giras la Ruleta" << std::endl;
    //int c = getchar();
    std::cout << "...... te a tocado la posicion: " << num<< std::endl;
    std::cout << " Te a tocado: " << ruleta[num][1] <<"€"<< std::endl;*/
do
{
      if (num == 22)
    {
        choise==0;
    }
    

    cout <<"Que quieres hacer?"<< endl;
        
  
        
        cout<<"====================================================="<<endl;
        std::cout << "1. Girar Ruleta" << std::endl;
		std::cout << "2. Comprar letras" << std::endl;
        std::cout << "3. Todas las Vocales" << std::endl;
		std::cout << "0. Bancarrota" << std::endl;
        
		cout<<"====================================================="<<endl;
               // cout <<"Panel: "<< spanel[i] <<endl;
        cout << "Saldo: "<< concursante.dinero << eur<<"€"<<endl;
        std::cout << "Comodines:" << comodin<< std::endl;
        cout << "Pista: "<< Pista[0] <<endl;
        cout << "Panel:" <<endl;
         cout << "  _ _ _ _ _ _ _ _ _ _ _ _ _ _"<<endl;
        //cout <<"Solucion:  "<< solucion[i] <<endl;
         for (size_t y= 0; y< 30; y++)
    {

        cout << " "<< solucion[y]; 

    }//cout << " v" << i;

    cout << endl;

       i=i+1;
		std::cin >> choise;
        switch (choise)
        {

        case 1:
    
        num = rand() % 28; 


    std::cout << "Giras la Ruleta" << std::endl;
    //int c = getchar();
    std::cout << "...... te a tocado la posicion: " << num<< std::endl;
    std::cout << " Te a tocado: " << ruleta[num][1] <<" €"<< std::endl; 
    ruleta2[num]=eur;
    eur=eur+eur;
    concursante.dinero=eur;
    //if para contabilizar el comodin
    if (num !=23)
    {
        //comodin=comodin=1;

    }
    else
    {
        comodin=comodin+1;
    }
    
    //23 if para hacer funcinar el sistema de monetizacion comenzamos 
    // desde la posicion 0

    if (num !=0)
    {
        
    }
    else
    {
    
    eur=
        
    }
    


/* 


     if ()
    {
        
    }
    else
    {
        
    }

        if ()
    {
        
    }
    else
    {
        
    }

        if ()
    {
        
    }
    else
    {
        
    }

        if ()
    {
        
    }
    else
    {
        
    }

        if ()
    {
        
    }
    else
    {
        
    }

        if ()
    {
        
    }
    else
    {
        
    }

        if ()
    {
        
    }
    else
    {
        
    }

        if ()
    {
        
    }
    else
    {
        
    }

        if ()
    {
        
    }
    else
    {
        
    }

        if ()
    {
        
    }
    else
    {
        
    }

        if ()
    {
        
    }
    else
    {
        
    }

        if ()
    {
        
    }
    else
    {
        
    }

        if ()
    {
        
    }
    else
    {
        
    }

        if ()
    {
        
    }
    else
    {
        
    }

        if ()
    {
        
    }
    else
    {
        
    }

        if ()
    {
        
    }
    else
    {
        
    }

        if ()
    {
        
    }
    else
    {
        
    }

        if ()
    {
        
    }
    else
    {
        
    }

        if ()
    {
        
    }
    else
    {
        
    }

        if ()
    {
        
    }
    else
    {
        
    }

        if ()
    {
        
    }
    else
    {
        
    }

        if ()
    {
        
    }
    else
    {
        
    }

    */

    
    
    
         


        break;

        case 2:
    cout << "En que posicion quieres la letra a comprar?"<<endl;

    cin >> z;
    cout<< "Que letra Quieres comprar?"<<endl; 

        cin >> cp;

        //for (size_t z = 0; i < 14; z++)
        //{
    
            if(cp != spanel[z]){
            cout <<" Esa letra NO existe en el panel GAME OVER"<<endl;
            if (comodin !=1)
            {
                                num =22;

            }
            else
            {
            std::cout << "Has perdido pero tienes comodin " << std::endl;

            comodin=0;

            }
            
            


        }
            else
            {

        std::cout << "Letra CORRECTA! " << spanel[z] << std::endl;


        solucion[z]=cp;
                     }    
       // if(cp != spanel[z]){
      //      cout <<" Esa letra NO existe en el panel GAME OVER"<<endl;

     //   }

        //}        
        
        //cin >> solucion[i];
       //std::getline(std::cin, solucion[1]);    
        break;
        
        
        case 3:

        // Todas las Vocales del 1r panel
        // solo esta configurado para el primer panel 
    if (num != 24)
    {
    std::cout << "" << std::endl;
    std::cout << "No me seas tramposo no te a tocado el comodin" << std::endl;
std::cout << "" << std::endl;
 
            }
    else
    {
        solucion[0]={"E"};
        solucion[3]={"O"};
        solucion[5]={"E"};
        solucion[8]={"E"};
        solucion[11]={"A"};
        solucion[13]={"O"};
    }
    
        break;      
        default:
            break;
        }
} while (choise !=0 && num !=22);

if (num != 22)
{

    //el primer COUT no se acctiva  solo se activa el segundo cuando sale num=22 es decir Bancarrota

    std::cout << "Que lastima... has perdido GAME OVER volviendo al Menu" << std::endl;

}

else
{
    std::cout << "" << std::endl;
    std::cout << "Que lastima... has perdido GAME OVER volviendo al Menu" << std::endl;
    std::cout << "" << std::endl;
}





};