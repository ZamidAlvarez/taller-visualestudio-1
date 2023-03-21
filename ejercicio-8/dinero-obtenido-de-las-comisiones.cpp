#include <iostream>
using namespace std;
int main() {
float venta_1;
float venta_2;
float venta_3;
float sueldo_base;
float comision = 0;
float sueldo_total = 0;
string mensaje_1 = "el dinero obtenido por concepto de comisones es de: ";
string mensaje_2 = "el dinero obtenido total es de: ";
cout << "un vendedor recibe un sueldo base, mas un 10 porciento extra por comision de sus ventas, el vendedor desea saber cuanto dinero obtendra por concepto de comisiones por las tres ventas que realiza en el mes y el total que recibira en el mes tomando en cuenta su sueldo base y comisiones." << endl;
cout << "ingrese el sueldo base del vendedor: " << endl;
cin >> sueldo_base;
cout << "valor de la venta 1: " << endl;
cin >> venta_1;
cout << "valor de la venta 2: " << endl;
cin >> venta_2;
cout << "valor de la venta 3: " << endl;
cin >> venta_3;
comision = (venta_1 + venta_2 + venta_3) *0.10;
sueldo_total = sueldo_base + comision;
cout << mensaje_1 << comision << endl;
cout << mensaje_2 << sueldo_total << endl;
}