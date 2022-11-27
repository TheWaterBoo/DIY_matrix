#include <iostream>
#include <chrono>
#include <thread>

using namespace std;
#define RED "\033[31m";
#define BLUE "\033[34m";
#define CYAN "\033[36m";
#define MAGENTA "\033[35m";
#define GREEN "\033[32m";
#define YELLOW "\033[33m";

int main (){
	srand(time(NULL));
	int estAnterior = 0, estAnterior2 = 0, estAnterior3 = 0, estAnterior4 = 0, estAnterior5 = 0,estAnterior6 = 0;
	int colAnterior = 0;
	string spaces = "", spaces2 = "", spaces3 = "";
	string selectedColor = "";
	while (true){
		//--------------- variables para numeros aleatorios -----------------
		int numAleatorio = rand() % 101;
		int numAleatorio2 = rand() % 101;
		int numAleatorio3 = rand() % 101;
		//-------------------------------------------------------------------
		//Escoge el numero de escalon
		int stepRand = rand() % 10;
		int stepRand2 = rand() % 10;
		int stepRand3 = rand() % 10;
		//Escoge el color aleatorio
		int randColor = rand() % 6;
		int randColor2 = rand() % 6;
		int randColor3 = rand() % 6;
		//Evita que el numero aleatorio se vuelva a repetir
		if ( estAnterior == numAleatorio ){
			numAleatorio++;
		}
		if ( estAnterior3 == numAleatorio2 ){
			numAleatorio2++;
		}
		if ( estAnterior4 == numAleatorio3 ){
			numAleatorio3++;
		}
		//Evita que salga un numero en el mismo espacio
		if ( estAnterior2 == stepRand ){
			stepRand++;
		}
		if ( estAnterior5 == stepRand2 ){
			stepRand2++;
		}
		if ( estAnterior6 == stepRand3 ){
			stepRand3++;
		}
		//Evita que se repita el color
		if ( colAnterior == randColor ){
			randColor++;
		}
		//Guarda para leer como estado anterior
		colAnterior = randColor;
		estAnterior5 = stepRand2;
		estAnterior6 = stepRand3;
		estAnterior4 = numAleatorio3;
		estAnterior3 = numAleatorio2;
		estAnterior2 = stepRand;
		estAnterior = numAleatorio;
		switch(stepRand){
			case 0:
				spaces = " ";
			break;
			case 1:
				spaces = "  ";
			break;
			case 2:
				spaces = "   ";
			break;
			case 3:
				spaces = "    ";
			break;
			case 4:
				spaces = "     ";
			break;
			case 5:
				spaces = "      ";
			break;
			case 6:
				spaces = "       ";
			break;
			case 7:
				spaces = "        ";
			break;
			case 8:
				spaces = "         ";
			break;
			case 9:
				spaces = "          ";
			break;
			case 10:
				spaces = "           ";
			break;
			case 11:
				spaces = "            ";
			break;
		}
		switch(stepRand2){
			case 0:
				spaces2 = " ";
			break;
			case 1:
				spaces2 = "  ";
			break;
			case 2:
				spaces2 = "   ";
			break;
			case 3:
				spaces2 = "    ";
			break;
			case 4:
				spaces2 = "     ";
			break;
			case 5:
				spaces2 = "      ";
			break;
			case 6:
				spaces2 = "       ";
			break;
			case 7:
				spaces2 = "        ";
			break;
			case 8:
				spaces2 = "         ";
			break;
			case 9:
				spaces2 = "          ";
			break;
			case 10:
				spaces2 = "           ";
			break;
			case 11:
				spaces2 = "            ";
			break;
		}
		switch(stepRand3){
			case 0:
				spaces3 = " ";
			break;
			case 1:
				spaces3 = "  ";
			break;
			case 2:
				spaces3 = "   ";
			break;
			case 3:
				spaces3 = "    ";
			break;
			case 4:
				spaces3 = "     ";
			break;
			case 5:
				spaces3 = "      ";
			break;
			case 6:
				spaces3 = "       ";
			break;
			case 7:
				spaces3 = "        ";
			break;
			case 8:
				spaces3 = "         ";
			break;
			case 9:
				spaces3 = "          ";
			break;
			case 10:
				spaces3 = "           ";
			break;
			case 11:
				spaces3 = "            ";
			break;
		}
		switch(randColor){
			case 0:
				selectedColor = RED;
			break;
			case 1:
				selectedColor = BLUE;
			break;
			case 2:
				selectedColor = YELLOW;
			break;
			case 3:
				selectedColor = MAGENTA;
			break;
			case 4:
				selectedColor = GREEN;
			break;
			case 5:
				selectedColor = CYAN;
			break;
		}
		cout<<selectedColor<<spaces<<numAleatorio<<spaces2<<numAleatorio2<<spaces3<<numAleatorio3<<endl;
		std::this_thread::sleep_for(70ms); //Duerme el proceso durante medio segundo
	}
	return 0;
}