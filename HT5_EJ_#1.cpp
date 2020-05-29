#include <iostream>
 
#define TOPE 2000
 
using namespace std;
 
void menu();
void Categoria();
 
struct {
    string codigo;
    int Zona;
    int Tipo;
 
} clientes[TOPE];
 
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
        cout << "1. Categorias de Compras" << endl;
        cout << "2. Reporte de ventas" << endl;
        cout << "3. Salir" << endl;
        cout << endl;
        cout << "Seleccione su opcion: ";
        cin >> opc;
 
        switch (opc) {
            case 1:
                Categorias();
            break;
            case 2:
                //tipo();
            break;
        }
 
    } while (opc < 3);
 
}
 
//-----------------------------------------
void ventaEntradas() {
 
    if (i <= TOPE) {
        cout << "Categoria: ";
        cin >> Zona[i].codigo;
        cout << "Tipo: ";
        cin >> Precio[i].cantidad;
        cout << "Residencial: ";
        cin >> B[i].salas;
        cout << endl;
        cout << "Venta registrado con exito" << endl << endl;
        i++;
    }
 
}
