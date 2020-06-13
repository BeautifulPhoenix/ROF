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
int vocal;

string cp;

int eur=0;
bool encontrado=false;




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
        std::cout << i << ". |"<< ruleta[i][1] << "|"<< std::endl;

        
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
   /*   if (num == 22)
    {
        choise==0;
    } */
    

    cout <<"Que quieres hacer?"<< endl;
        
  
        
        cout<<"====================================================="<<endl;
        std::cout << "1. Girar Ruleta" << std::endl;
		std::cout << "2. Comprar letras" << std::endl;
        std::cout << "3. Todas las Vocales" << std::endl;
		std::cout << "0. Salir " << std::endl;
        
		cout<<"====================================================="<<endl;
               // cout <<"Panel: "<< spanel[i] <<endl;
            cout << "Saldo: "<< concursante.dinero <<"€"<<endl;
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
    //if para contabilizar el comodin
    if (num !=23)
    {
        //comodin=comodin=1;

    }
    else
    {
        comodin=comodin+1;
    }
    
    //23 if + el X2 y el 1/2 para hacer funcinar el sistema de monetizacion comenzamos 
    // desde la posicion 0
    if (num !=0)
    {


    }
    else
    {
    
    eur=eur+50;
        
    }
    


     if (num !=1)
    {
        
    }
    else
    {

        eur=eur+75;
        
    }

    

        if (num !=2)
    {
        
    }
    else
    {

        eur=eur+25;
        
    }

        if (num !=3)
    {
        
    }
    else
    {
        eur=eur+50;
        
    }
    
   

        if (num !=4)
    {
        
        
    }
    else
    {

        eur=eur+75;
        
    }

     

        if (num !=5)
    {
        
    }
    else
    {
        eur=eur+25;
        
    }

    

        if (num !=6)
    {
        
    }
    else
    {
        eur=eur+50;

        
    }

   

        if (num !=7)
    {
        
    }
    else
    {
       eur=eur+75; 
    }
     

        if (num !=8)
    {
        
    }
    else
    {

        eur=eur+25;
        
    }
    

        if (num !=9)
    {
        
    }
    else
    {

        eur=eur+50;
        
    }

        if (num !=10)
    {
        
    }
    else
    {
        eur=eur+75;
        
    }

        if (num !=11)
    {
        
    }
    else
    {
        eur=eur+25;
    }

        if (num !=12)
    {
        
    }
    else
    {
        eur=eur+50;        
    }

        if (num !=13)
    {
        
    }
    else
    {
        eur=eur+75;
        
    }

        if (num !=14)
    {
        
    }
    else
    {
        eur=eur+25;
    }

        if (num !=15)
    {

    }
    else
    {
        eur=eur+50;

    }

        if (num !=16)
    {

    }
    else
    {
         eur=eur+75;

    }

        if (num !=17)
    {
        
    }
    else
    {
        eur=eur+100;
    }

        if (num !=18)
    {
        
    }
    else
    {
        eur=eur+150;
    }

        if (num !=19)
    {
        
    }
    else
    {
        eur=eur+200;
    }

        if (num !=20)
    {
        
    }
    else
    {
        eur=eur+100;
    }

        if (num !=21)
    {
        
    }
    else
    {
        eur=eur+21;
    }

        if (num !=25)
    {
        
    }
    else
    {
        eur=eur*2;
    }

    if (num !=26)
    {
        /* code */
    }
    else
    {
        eur=eur/2;
    }

    if (num != 27)
    {
        
    }
    else
    {
        eur=eur+25;
    }
    if (num !=24)
    {
        /* code */
    }
    else
    {

        vocal=1;

    }
    
    
    
    concursante.dinero=eur;

    
    
    
         


        break;

        case 2:
  
    
    /*
    //cout << "En que posicion quieres la letra a comprar?"<<endl;

    //cin >> z;
    cout<< "Que letra Quieres comprar?"<<endl; 

        cin >> cp;

        // lo suyo seria hacer un bucle de tal manera que pillara cualquier letra de cualquier posicion pero al hacerlo con el for el programa peta

        for (size_t z = 0; z < 14; z++)
        {
    
            if(spanel[z].find(cp) > 0){
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

        }  
*/


cout << "Dime  la Letra " <<endl;
cin >> cp;

encontrado=0;

for (size_t z = 0; z < 14; z++)
{

if (spanel[z]==cp)
{
    encontrado=1;
    solucion[z]=cp;
}

if (encontrado=1)
{
    std::cout << "Letra CORRECTA!" << std::endl;
}else
{
std::cout << "Esa letra NO existe en el panel." << std::endl;
if (comodin==0)
{

std::cout << "GAME OVER" << std::endl;

num=22;

}else
{
    std::cout << "Has perdido el comodin" << std::endl;
    comodin=0;
}


}




}










































   
        break;
        
        
        case 3:

        // Todas las Vocales del 1r panel
        // solo esta configurado para el primer panel 
    if (vocal != 1)
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