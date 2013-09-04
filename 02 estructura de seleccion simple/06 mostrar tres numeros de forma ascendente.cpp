#include <iostream>

using namespace std;

int main(){
	int a, b, c;
	
	a = 0;
	b = 0;
	c = 0;

	cout << "Ingrese el primer numero ";
	cin >> a;

	cout << "Ingrese el segundo numero ";
	cin >> b;

	cout << "Ingrese el tercer numero ";
	cin >> c;

	if( a < b && b < c){
		cout << a << " " << b << " " << c;
	}
	else{
		if(a < c && c < b){	
					cout << a << " " << c << " " << b;
		}
		else{
			if(b < a && a < c)	{
				cout << b << " " << a << " " << c;
			}
			else{
				if(b < c && c < a){	
					cout << b << " " << c << " " << a;
				}
				else{
					if(c < a && a < b){
						cout << c << " " << a << " " << b;
					}
					else{
						if(c < b && b < a){
							cout << c << " " << b << " " << a;
						}
						else{
							cout << "Error en los numeros ingresados. Tal vez hay dos numeros iguales?";
						}
					}
				}
			}
		}
	}

	cout << endl;
	
	cin.get();
	
	return 0;

}