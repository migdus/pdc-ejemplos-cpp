/*
 * Autor: Miguel Dussán
 */

/*
 * Escriba un programa que defina una matriz de 3 x 3 e inicialice sus valores en 2,3,4
 * para la primera fila, 6,7,4 para la segunda fila y 3,2,5 para la tercera fila.
 */

#include <iostream>

using namespace std;

int main()
{
	//Primera forma de definir una matriz:
	//Declarando e inicializando en la misma línea.
	//Observe donde se define el tamaño para cada una de las dimensiones
	//y cómo se inicializan sus valores
	int m[3][3] = {{2, 3, 4}, {6, 7, 4}, {3, 2, 5}};

	//Segunda manera de inicializar una matriz:
	//Fijando los valores para cada una de sus posiciones.
	m[0][0] = 2;
	m[0][1] = 3;
	m[0][2] = 4;

	m[1][0] = 6;
	m[1][1] = 7;
	m[1][2] = 4;

	m[2][0] = 3;
	m[2][1] = 2;
	m[2][2] = 5;

	//Se itera por las posiciones de la matriz
	//Se utiliza la variable i para controlar la posición de las filas
	//Se utiliza la variable j para controlar la posición de las columnas
	//Se accede al elemento utilizando m[i][j]
	for(int i = 0; i < 3; i++)
		for(int j = 0; j < 3; j++)
			cout << "Contenido de m[" << i << "][" << j << "] : " << m[i][j] << endl;
	return 0;
}
