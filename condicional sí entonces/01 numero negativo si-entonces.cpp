/*
Autor: Miguel Dussán
*/

/*
Este programa determina si un número entero es negativo
utilizando una estructura Sí-Entonces
*/

#include <iostream>
	
using namespace std;

int main(){
	int numero = 0;
	
	//Mensaje explicando el programa
	
	/*
	Se puede poner dos cadenas separadas una al lado de la otra utilizando
	varios operadores "<<".
	
	La instrucción endl ("end line") le dice al programa que salte una línea.
	*/
	cout << "Este programa determina" << " si un numero entero es negativo ";
	cout<<"utilizando una estructura Si-Entonces"<<endl<<endl;
	
	cout << "Escriba un numero: ";
	
	/*
	La instrucción cin ("c in", "entrada de c") captura por teclado lo que el 
	usuario escribe y lo asigna a la variable que esté a la derecha del operador
	">>".
	*/
	cin >> numero;
	
	/*
		Estructura selectiva Sí-Entonces (If).
		El alcance de la estructura se identifica porque abre y cierra 
		llaves ({}).
		La condición para que ejecute el código dentro de la estructura es
		que el número sea menor que cero.
	*/
	if(numero<0){						//Abre la estructura si - entonces
		
		//Imprime un mensaje si el número es negativo
		
		cout << "El numero es negativo";
	
	}									//Cierra la estructura si - entonces
	
	cin.get();
	
	return 0;
}
