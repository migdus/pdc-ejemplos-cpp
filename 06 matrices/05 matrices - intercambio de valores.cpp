/*
 * Autor: Miguel Dussán
 */

/*
 * Escriba un programa que realice el intercambio de los valores de una matriz de
 * la columna del centro con la primera columna
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int filas = 0; //Almacena el número de filas de la matriz
	int columnas = 0; //Almacena el número de columnas de la matriz

	int aux = 0; //Auxiliar para hacer el intercambio de valores

	cout << "Cuantas filas debe tener la matriz? ";
	cin >> filas;

	cout << "Cuantas columnas debe tener la matriz? ";
	cin >> columnas;

	int m[filas][columnas]; // Declaración de la matriz, con el tamaño especificado por el usuario

	//Inicialización de la matriz, con los valores que el usuario escriba

	for(int i = 0; i < filas; i++)
		for(int j = 0; j < columnas; j++)
		{
			cout << "Valor para m[" << i << "][" << j << "] ? ";
			cin >> m[i][j];
		}

	//Mostrar los resultados tabulados
	cout << "Valores ingresados para la matriz" << endl;
	cout << "Fila" << setw(15) << "Columna" << setw(15) << "Valor" << endl;
	cout << "____________________________________" << endl;
	for(int i = 0; i < filas; i++)
		for(int j = 0; j < columnas; j++)
			cout << i << setw(15) << j << setw(15) << m[i][j] << endl;

	//Mostrar el arreglo en formato de matriz
	cout << endl << endl << "Arreglo en forma de matriz" << setw(5) << endl;
	for(int i = 0; i < filas; i++)
	{
		for(int j = 0; j < columnas; j++)
			cout << m[i][j] << setw(5);
		cout << endl;
	}

	//Encontrar la columna central
	//Si la matriz tiene un número par de columnas, entonces se considera la columna
	//del centro como aquella cuyo índice es la mitad del número de columnas
	int centro = columnas / 2;

	//Intercambio de elementos
	for (int i = 0; i < filas; i++)
	{
		aux = m[i][0];
		m[i][0] = m[i][centro];
		m[i][centro] = aux;
	}


	//Mostrar los resultados tabulados
	cout << endl << "Valores intercambiados para la matriz" << endl;
	cout << "Fila" << setw(15) << "Columna" << setw(15) << "Valor" << endl;
	cout << "____________________________________" << endl;
	for(int i = 0; i < filas; i++)
		for(int j = 0; j < columnas; j++)
			cout << i << setw(15) << j << setw(15) << m[i][j] << endl;


	//Mostrar la matriz
	cout << endl << endl << "Matriz" << setw(5) << endl;
	for(int i = 0; i < filas; i++)
	{
		for(int j = 0; j < columnas; j++)
			cout << m[i][j] << setw(5);
		cout << endl;
	}

	cin.get();

	return 0;
}

