// Autor: Miguel Dussán

// Programa que muestra los números desde 0 hasta 10 utilizando ciclos

#include <iostream>

using namespace std;

int main(){

	//Variable de control de ciclo
	//También se utiliza para mostrar el número actual dentro del ciclo

	int numero = 0;

	while(numero <= 10){ //Abre ciclo mientras

		cout << numero << endl;  //imprime el número

		// Incremento de la variable de control
		numero++; //equivalente a: numero = numero + 1 
	} // Cierra ciclo mientras

	
	cin.get();

	return 0;
}