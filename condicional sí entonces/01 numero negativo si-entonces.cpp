/*
Autor: Miguel Duss�n
*/

/*
Este programa determina si un n�mero entero es negativo
utilizando una estructura S�-Entonces
*/

#include <iostream>
	
using namespace std;

int main(){
	int numero = 0;
	
	//Mensaje explicando el programa
	
	/*
	Se puede poner dos cadenas separadas una al lado de la otra utilizando
	varios operadores "<<".
	
	La instrucci�n endl ("end line") le dice al programa que salte una l�nea.
	*/
	cout << "Este programa determina" << " si un numero entero es negativo ";
	cout<<"utilizando una estructura Si-Entonces"<<endl<<endl;
	
	cout << "Escriba un numero: ";
	
	/*
	La instrucci�n cin ("c in", "entrada de c") captura por teclado lo que el 
	usuario escribe y lo asigna a la variable que est� a la derecha del operador
	">>".
	*/
	cin >> numero;
	
	/*
		Estructura selectiva S�-Entonces (If).
		El alcance de la estructura se identifica porque abre y cierra 
		llaves ({}).
		La condici�n para que ejecute el c�digo dentro de la estructura es
		que el n�mero sea menor que cero.
	*/
	if(numero<0){						//Abre la estructura si - entonces
		
		//Imprime un mensaje si el n�mero es negativo
		
		cout << "El numero es negativo";
	
	}									//Cierra la estructura si - entonces
	
	cin.get();
	
	return 0;
}
