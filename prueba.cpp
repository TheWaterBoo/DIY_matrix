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
	int randColor[12], colAnterior[12];
	int numAleatorio[12], numAnterior[12];
	int stepRand[12], stepAnterior[12];
	string spaces[12];
	string selectedColor[12];
	
	while (true){
		//----------------------- for para manejar los numeros aleatorios -----------------------
		for ( int i = 0 ; i < 12 ; ){
		    numAleatorio[i] = rand() % 101; //Rango de aleatorios de 0 a 100
		    i++;
		}
		//------------------------------------------------------------------------------------
		
		//--------------------------- Escoge el numero de escalon ---------------------------
		for ( int i = 0 ; i < 12 ; ){
		    stepRand[i] = rand() % 12; //Rango de aleatorios de 0 a 12
		    i++;
		}
		//------------------------------------------------------------------------------------
		
		//----------------------------- Escoge el color aleatorio ----------------------------
		for ( int i = 0 ; i < 12 ; ){
			randColor[i] = rand() % 18; // Se guarda el valor del color dependiendo del valor de i
			i++;
		}
		//------------------------------------------------------------------------------------
		
		//--------------- Evita que el numero aleatorio se vuelva a repetir ------------------
		for ( int i = 0 ; i < 12 ; ){
		    if ( numAleatorio[i] == numAnterior[i] ){
		        numAleatorio[i]++; //incrementa el numero aleatorio, lo hace cambiar por 1 mas
		    }
		    numAnterior[i] = numAleatorio[i];
		    i++;
		}
		//------------------------------------------------------------------------------------
		
		//----------------- Evita que salga un numero en el mismo espacio --------------------
		for ( int i = 0 ; i < 12 ; ){
		    if ( stepRand[i] == stepAnterior[i] ){
		        stepRand[i]++; //sube un escalon mas, sin mucha diferencia...
		    }
		    stepAnterior[i] = stepRand[i];
		    i++;
		}
		//------------------------------------------------------------------------------------
		
		//---------------------- Evita que se repita el color --------------------------------
		for (int i = 0 ; i < 12 ; ){
		    if ( randColor[i] == colAnterior[i] ){
		        randColor[i]++; //se incrementa solo en 1 el color, para variar
		    }
		    colAnterior[i] = randColor[i]; //Se guarda el color anterior
		    i++;
		}
		//------------------------------------------------------------------------------------
		
		for ( int i = 0 ; i < 12 ; ) {
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
		
		for ( int i = 0 ; i < 12 ; ){
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
		//El primer cout no salta linea para que el segundo le siga (por temas de espacio en pantalla con el codigo :p)
		cout<<selectedColor[0]<<spaces[0]<<numAleatorio[0]<<selectedColor[1]<<spaces[1]<<numAleatorio[1]<<selectedColor[2]<<spaces[2]<<numAleatorio[2];
		cout<<selectedColor[3]<<spaces[3]<<numAleatorio[3]<<selectedColor[4]<<spaces[4]<<numAleatorio[4]<<selectedColor[5]<<spaces[5]<<numAleatorio[5];
		cout<<selectedColor[6]<<spaces[6]<<numAleatorio[6]<<selectedColor[7]<<spaces[7]<<numAleatorio[7]<<selectedColor[8]<<spaces[8]<<numAleatorio[8];
		cout<<selectedColor[9]<<spaces[9]<<numAleatorio[9]<<selectedColor[10]<<spaces[10]<<numAleatorio[10];
		cout<<selectedColor[11]<<spaces[11]<<numAleatorio[11]<<endl; //termina el parrafo
		//Duerme el proceso durante medio segundo... o el tiempo que tu quieras -.-
		std::this_thread::sleep_for(10ms); //ms = milliseconds
	}
	return 0;
}