#include <iostream>
 
 
using namespace std;
 
void menu();
void ventaCuadernos();
 
struct {
    string codigo;
    int cantidad;
    int modelo;
 
} 
 
int i=0;
 
int main() {
    menu();
 
 
    return 0;
}
 
//Funciones
void menu() {
    int opc;
 
 
    do {
        cout << "******************************" << endl;
        cout << "****** Menu de Opciones ******" << endl;
        cout << "******************************" << endl << endl;
        cout << "1. Modelo de Cuadernos" << endl;
        cout << "2. Ventas Mensuales" << endl;
        cout << "3. Salir" << endl;
        cout << endl;
        cout << "Seleccione su opcion: ";
        cin >> opc;
 
        switch (opc) {
            case 1:
                ventaCuadernos();
            break;
            case 2:
                //totalCuadernos();
            break;
        }
 
    } while (opc < 3);
 
}
 
//-----------------------------------------
void ventaEntradas() {
 
    if (i <= TOPE) {
        cout << "Codigo del Cuaderno: ";
        cin >> cuaderno[i].codigo;
        cout << "Cantidad de Cuadrnos: ";
        cin >> cuaderno[i].cantidad;
        cout << "Venta de Cuadernos: ";
        cin >> cuaderno[i].salas;
        cout << endl;
        cout << "Reporte generado con exito" << endl << endl;
        i++;
    }
 
}
