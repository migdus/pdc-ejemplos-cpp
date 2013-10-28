/*
Autor: Miguel Dussán

Escriba un programa que capture números en un arreglo. Después el programa
debe pedir un número que debe buscar en el arreglo y retornar un arreglo donde
marque las posiciones en las que este se encuentra.
*/

#include <iostream>

using namespace std;

int main(){
	int tam, buscar;
	//Indica si el programa encuentra al menos un elemento que coincida
	//con la búsqueda
	bool encontre_uno = false; 

	cout << " Cantidad de elementos a ingresar? ";
	cin >> tam;

	int arreglo[tam];

	//marca las posiciones donde se encuentra el término de búsqueda
	bool encontrado[tam];

	//Iterar por el arreglo
	for(int i=0;i<tam;i++){
		//Captura del número para la posición i
		cout << "Escriba un número para la posición " << i+1 << " ";
		cin >> arreglo[i];

		//Inicialización del arreglo encontrado en falso, porque para esa
		//posición todavía no se ha encontrado un término
		encontrado[i]=false;
	}

	cout << "Numero a buscar? ";
	cin >> buscar;

	//Iterar por el arreglo
	for(int i=0;i<tam;i++){
		//Si se encuentra el número en la posición i, se marca
		//como verdadero en el arreglo encontrado en esa misma posición
		if(arreglo[i]==buscar){
			encontre_uno=true; //Se marca para indicar que se encontró al menos uno
			encontrado[i]=true;
		}
	}

	cout << "El numero " << buscar ;
	//Como el contenido tiene una variable booleana, no es necesario hacer
	//la comparación lógica encontre_uno == true
	if(encontre_uno){
		//Mostrar resultados, si se encontró al menos una coincidencia
		cout << " se encuentra en las posiciones: ";
		//Iterar por los resultados
		for(int i=0;i<tam;i++){
			//Como el contenido tiene una variable booleana, no es necesario hacer
			//la comparación lógica encontrado[i] == true
			if(encontrado[i]) 
				cout << i << " ";
		}
	}else{
		cout << " no se encuentra entre los numeros ingresados";
	}
	cin.get();
	return 0;
}