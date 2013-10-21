// Autor: Miguel Dussán

// Programa que busca un número dentro de un arreglo

#include <iostream>

using namespace std;

int main(){
	
	//Arreglo de ejemplo, tamaño 10

	int arreglo[10] ={123,45,1,23,5,8,11,13,87,2};
	int buscar;

	// Bandera para indicar si se encuentra el elemento
	bool encontrado = false;

	cout << "Que numero desea buscar? ";
	cin >> buscar;

	for(int i=0;i < 10; i++){
		if(arreglo[i] == buscar){
			cout << "Numero encontrado en la posicion " << i;
			encontrado = true; //Marca que el elemento se encontró
			break; // Termina el ciclo
		}
	}

	//Si el elemento no se encuentra, mostrar un mensaje que lo indique
	if (encontrado == false){
		cout << "El elemento solicitado no se encuentra en el arreglo";
	}

	cin.get();

	return 0;
}