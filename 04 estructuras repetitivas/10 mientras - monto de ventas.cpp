#include <iostream>

using namespace std;

int main() {
    int venta = 1; // Monto de una venta
    int v_200 = 0; // Cantidad de ventas de hasta $200
    int v_400 = 0; // Cantidad de ventas entre $200 y menores a $400
    int v_m400= 0; // Cantidad de ventas de $400 o más
    while (venta > 0) {
        cout << "Ingrese el monto de una venta (0 o número negativo para terminar): ";
        cin >> venta;
        if(venta > 0 && venta <=200)
            v_200++;
        else if (venta > 0 && venta < 400)
            v_400++;
        else if (venta >= 400)
            v_m400++;
    }
    cout << "Ventas menores o iguales a $200: "<<v_200<<endl;
    cout << "Ventas superiores a $200 y menores a $400: "<<v_400<<endl;
    cout << "Ventas iguales o superiores a $400: "<<v_m400<<endl;
    system("pause");
    return 0;

}
