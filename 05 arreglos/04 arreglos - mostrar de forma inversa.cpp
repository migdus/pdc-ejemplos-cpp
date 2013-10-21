//Autor: Miguel Dussán

// Este programa captura unos números, los almacena en un arreglo y luego
// los muestra en orden inverso al que el usuario los escribió

#include <iostream>

using namespace std;

int main(){
	int cant; //cantidad de elementos a ingresar

	//captura de cantidad de elementos
	cout << "Cantidad de numeros a ingresar? ";
	cin >> cant;

	//Declaración del arreglo con tamaño determinado por el usuario
	int arreglo[cant];

	//Captura de números
	for(int i=0; i < cant; i++){
		cout << "Ingrese un numero: ";
		cin >> arreglo[i];
	}

	/*Mostrar los números en orden inverso a como los ingresaron

	El valor inicial de j es el último índice del arreglo, que es 
	la cantidad de números que el usuario ingresó menos uno, porque 
	los índices empiezan en 0.
	
	La condición del ciclo es que el contador sea mayor o igual que 0,
	ya que el valor mínimo que puede tener un índice en un arreglo es 0.

	La expresión de conteo es j-- porque se va decrementando en uno el valor
	de la variable por cada iteración.
	*/
	for(int j=cant - 1; j >= 0; j--){
		cout << arreglo[j] << " ";
	}

	cin.get();

	return 0;
}