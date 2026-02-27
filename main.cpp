#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    string nombre_cliente;
    double precio_producto, subtotal, iva, total;
    int cantidad_producto;

    cout<<"Desarrollado por Emily de Leon"<<endl;
    cout<<"Carnet: 9941-25-13659"<<endl;
    cout<<endl;
    cout<<"Ingrese nombre del cliente: ";
    getline(cin,nombre_cliente);
    cout<<"Ingrese precio del producto:";
    cin>>precio_producto;
    cout<<"Ingrese la cantidad de producto comprada: ";
    cin>>cantidad_producto;

    subtotal=precio_producto*cantidad_producto;
    iva=subtotal*0.12;
    total=subtotal+iva;

    cout<<"Tiendita de Emily"<<endl;
    cout<<endl;
    cout<<"Precio del producto comprado: "<<precio_producto<<endl;
    cout<<"Cantidad que compraste:"<<cantidad_producto<<endl;
    cout<<"Cliente: "<<nombre_cliente<<endl;
    cout<<"Subtotal: Q"<<fixed<<setprecision(2)<<subtotal<<endl;
    cout<<"IVA: Q"<<fixed<<setprecision(2)<<iva<<endl;
    cout<<"Total: Q"<<total<<endl;
    return 0;
}