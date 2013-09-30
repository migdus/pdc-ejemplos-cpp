// Autor: Miguel Dussán

/*
Programa captura de forma indefinida notas de estudiante (hasta que se introduce un número
negativo), y calcula el promedio.
*/

#include <iostream>

using namespace std;

int main(){

	//Variable que cuenta el número de notas ingresadas
	int contador = 0;

	//Variable que acumula los resultados parciales de la suma
	int acumulador = 0;

	//Variable que captura el número que el usuario ingresa por teclado
	int nota = 0;

	while(nota >= 0 ){ //Abre ciclo mientras

		cout << "Nota? ";
		cin >> nota;

		if(nota >=0){
			/*
			acumulador += control equivale a: acumulador = acumulador + control
			*/
			acumulador += nota;

			contador++;
		}

	} // Cierra ciclo mientras

	//Mostrar en pantalla el resultado del promedio

	cout << "Promedio para " << contador << " notas ingresadas: " << acumulador / contador << endl;

	cin.get();

	return 0;
}