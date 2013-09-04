#include <iostream>

using namespace std;

int main(){
	
	int seleccion;

	seleccion = 0; //Valor inicial

	cout << "Este programa ofrece al usuario un menu sobre el cual seleccionara";
	cout << "un numero que corresponde a un pais. Una vez seleccione el pais ofrecera";
	cout << "datos sobre el mismo." << endl;

	cout << "Seleccione el numero del pais para conocer su capital" << endl << endl;

	cout <<"1. Colombia" << endl  << "2. Venezuela" << endl;
	cout <<"3. Peru" << endl << "4. Brasil" << endl << endl << "Opcion? ";

	cin >> seleccion;

	switch( seleccion ){
		case 1: // El usuario seleccionó el número 1
			cout << "La capital de Colombia es Bogota";
			break;

		case 2: // El usuario seleccionó el número 2
			cout << "La capital de Venezuela es Caracas";
			break;

		case 3: // El usuario seleccionó el número 3
			cout << "La capital de Peru es Lima";
			break;

		case 4: // El usuario seleccionó el número 4
			cout << "La capital de Brasil es Brasilia";
			break;

		default: // El usuario no seleccionó una opción correcta
			cout << "La opcion seleccionada no corresponde a una de las ofrecidas";
	}

	cout << endl;
	
	cin.get();
	
	return 0;

}