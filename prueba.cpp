#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

//Colores definidos, solo concatenarlos al inicio del cout
#define RED "\033[0;31m";
#define BLUE "\033[0;34m";
#define CYAN "\033[0;36m";
#define MAGENTA "\033[0;35m";
#define GREEN "\033[0;32m";
#define YELLOW "\033[0;33m";
// Colores en negritas
#define BOLDRED "\033[1;31m";
#define BOLDBLUE "\033[1;34m";
#define BOLDCYAN "\033[1;36m";
#define BOLDMAGENTA "\033[1;35m";
#define BOLDGREEN "\033[1;32m";
#define BOLDYELLOW "\033[1;33m";
// Colores en cursiva ( mas bien los caracteres estan en cursiva jeje )
#define ITALICRED "\033[3;31m";
#define ITALICBLUE "\033[3;34m";
#define ITALICCYAN "\033[3;36m";
#define ITALICMAGENTA "\033[3;35m";
#define ITALICGREEN "\033[3;32m";
#define ITALICYELLOW "\033[3;33m";
//--------------------------------------------------------

int main (){
	srand(time(NULL));
	int randColor[30], colAnterior[30];
	int numAleatorio[30], numAnterior[30];
	int stepRand[30], stepAnterior[30];
	string spaces[30];
	char letter[30];
	string selectedColor[30];
	
	while (true){
		//----------------------- for para manejar los numeros aleatorios -----------------------
		for ( int i = 0 ; i < 30 ; ){
		    numAleatorio[i] = rand() % 90 + 33; //Rango de aleatorios con valores ASCII, se da mas 33 para que comienze con ese valor
		    letter[i] = numAleatorio[i];
		    i++;
		}
		//------------------------------------------------------------------------------------
		
		//--------------------------- Escoge el numero de escalon ---------------------------
		for ( int i = 0 ; i < 30 ; ){
		    stepRand[i] = rand() % 12; //Rango de aleatorios de 0 a 12
		    i++;
		}
		//------------------------------------------------------------------------------------
		
		//----------------------------- Escoge el color aleatorio ----------------------------
		for ( int i = 0 ; i < 30 ; ){
			randColor[i] = rand() % 18; // Se guarda el valor del color dependiendo del valor de i
			i++;
		}
		//------------------------------------------------------------------------------------
		
		//--------------- Evita que el numero aleatorio se vuelva a repetir ------------------
		for ( int i = 0 ; i < 30 ; ){
		    if ( numAleatorio[i] == numAnterior[i] ){
		        numAleatorio[i]++; //incrementa el numero aleatorio, lo hace cambiar por 1 mas
		    }
		    numAnterior[i] = numAleatorio[i];
		    i++;
		}
		//------------------------------------------------------------------------------------
		
		//----------------- Evita que salga un numero en el mismo espacio --------------------
		for ( int i = 0 ; i < 30 ; ){
		    if ( stepRand[i] == stepAnterior[i] ){
		        stepRand[i]++; //sube un escalon mas, sin mucha diferencia...
		    }
		    stepAnterior[i] = stepRand[i];
		    i++;
		}
		//------------------------------------------------------------------------------------
		
		//---------------------- Evita que se repita el color --------------------------------
		for (int i = 0 ; i < 30 ; ){
		    if ( randColor[i] == colAnterior[i] ){
		        randColor[i]++; //se incrementa solo en 1 el color, para variar
		    }
		    colAnterior[i] = randColor[i]; //Se guarda el color anterior
		    i++;
		}
		//------------------------------------------------------------------------------------
		
		for ( int i = 0 ; i < 30 ; ) {
		    switch(stepRand[i]){
    			case 0:
    				spaces[i] = " ";
    			break;
    			case 1:
    				spaces[i] = "  ";
    			break;
    			case 2:
    				spaces[i] = "   ";
    			break;
    			case 3:
    				spaces[i] = "    ";
    			break;
    			case 4:
    				spaces[i] = "     ";
    			break;
    			case 5:
    				spaces[i] = "      ";
    			break;
    			case 6:
    				spaces[i] = "       ";
    			break;
    			case 7:
    				spaces[i] = "        ";
    			break;
    			case 8:
    				spaces[i] = "         ";
    			break;
    			case 9:
    				spaces[i] = "          ";
    			break;
    			case 10:
    				spaces[i] = "           ";
    			break;
    			case 11:
    				spaces[i] = "            ";
    			break;
    		    }
    		i++; //incrementa el contador luego de realizar todo
		}
		
		for ( int i = 0 ; i < 30 ; ){
		    switch(randColor[i]){
    			case 0:
    				selectedColor[i] = RED;
    			break;
    			case 1:
    				selectedColor[i] = BLUE;
    			break;
    			case 2:
    				selectedColor[i] = YELLOW;
    			break;
    			case 3:
    				selectedColor[i] = MAGENTA;
    			break;
    			case 4:
    				selectedColor[i] = GREEN;
    			break;
    			case 5:
    				selectedColor[i] = CYAN;
    			break;
    			case 6:
    				selectedColor[i] = BOLDRED;
    			break;
    			case 7:
    				selectedColor[i] = BOLDBLUE;
    			break;
    			case 8:
    				selectedColor[i] = BOLDYELLOW;
    			break;
    			case 9:
    				selectedColor[i] = BOLDMAGENTA;
    			break;
    			case 10:
    				selectedColor[i] = BOLDGREEN;
    			break;
    			case 11:
    				selectedColor[i] = BOLDCYAN;
    			break;
    			case 12:
    				selectedColor[i] = ITALICRED;
    			break;
    			case 13:
    				selectedColor[i] = ITALICBLUE;
    			break;
    			case 14:
    				selectedColor[i] = ITALICYELLOW;
    			break;
    			case 15:
    				selectedColor[i] = ITALICMAGENTA;
    			break;
    			case 16:
    				selectedColor[i] = ITALICGREEN;
    			break;
    			case 17:
    				selectedColor[i] = ITALICCYAN;
    			break;
		    }
		    i++; // incrementa en uno el contador c:
		}

		//Imprime los numeros coloridos aleatorios que ves en pantalla... eso hasta que se acabe el for
		for ( int i = 0 ; i < 30 ; ){
			//Antes solo se imprimian numeros, ahora caracteres aleatorios gracias al ASCII c:
			//cout<<selectedColor[i]<<spaces[i]<<numAleatorio[i];
			cout<<selectedColor[i]<<spaces[i]<<letter[i];
			i++;
		}
		cout<<""<<endl; //Evita que todo se imprima en un solo parrafo
		//Duerme el proceso durante medio segundo... o el tiempo que tu quieras -.-
		//std::this_thread::sleep_for(10ms); //ms = milliseconds
		//Duerme el proceso igual, funciona en unix
		std::this_thread::sleep_for(std::chrono::milliseconds(35));
	}
	return 0;
}
