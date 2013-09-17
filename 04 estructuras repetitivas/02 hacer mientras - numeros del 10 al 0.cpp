// Autor: Miguel Dussán

// Programa que muestra los números desde el 10 hasta 0 utilizando ciclos

#include <iostream>

using namespace std;

int main(){

	//Variable de control de ciclo
	//También se utiliza para mostrar el número actual dentro del ciclo

	int numero = 10;

	while(numero >= 0){ //Abre ciclo mientras

		cout << numero << endl;  //imprime el número

		// Decremento de la variable de control
		numero--; //equivalente a: numero = numero - 1 
	} // Cierra ciclo mientras

	
	cin.get();

	return 0;
}