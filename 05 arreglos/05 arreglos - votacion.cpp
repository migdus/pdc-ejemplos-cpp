// Autor: Miguel Dussán
//
// Escriba un programa que para un número determinado de votantes ingresados
// por el usuario, permita capturar los votos para 5 candidatos y los
// almacene en un arreglo. Con esta información el programa debe calcular
// el ganador de la elección, teniendo en cuenta que gana el candidato que
// haya obtenido más del 50% de los votos.

#include <iostream>

using namespace std;

int main() {

    int voto;
    float votantes;
    float votos[5]= {0,0,0,0,0};
    float resultados[5]= {0,0,0,0,0};
    bool existe_ganador = false;

    cout << "¿Cuántas personas desean votar?";
    cin >> votantes;

    for(int i=0; i<votantes; i++) {
        do {
            cout << "Ingrese el voto para el ciudadano "<< i+1 << ": ";
            cin >> voto;
        } while(voto < 1 || voto > 5);
        votos[voto-1]+=1; //Equivale a: votos[voto] = votos[voto]+1
    }

//Calcular los resultados
    for(int j=0; j < 5; j++) {
        resultados[j] = votos[j] * 100 / votantes;
    }
//Verificar quién sacó más de 50 %
    for(int k=0; k<5; k++) {
        if ( resultados[k] > 50) {
            cout << "El ganador fue el candidato " << k + 1;
            cout << " con un total del " << resultados[k] << "%";
            cout << " y un total de " << votos[k] << " votos";
            existe_ganador = true;
            break; //Para terminar el ciclo que lo contiene, porque ya se encontró a un ganador.
        }
    }
    if(existe_ganador == false) {
        cout << "No existe ganador";
    }
    cin.get();

    return 0;
}
