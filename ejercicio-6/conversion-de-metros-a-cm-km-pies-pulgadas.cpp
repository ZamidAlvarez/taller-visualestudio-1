#include <iostream>
using namespace std;
int main() {
float metros;
float centimetros;
float kilometros = 0;
float pies = 0;
float pulgadas = 0;
// 1 metro son 100 cm, 1000 metros son 1 km, 1 metro son 39.37 pulgadas, 1 pie son 12 pulgadas.
string mensaje_1 = "La conversion de metros a centimetros es: ";
string mensaje_2 = "La conversion de metros a kilometros es: ";
string mensaje_3 = "La conversion de metros a pies es: ";
string mensaje_4 = "La conversion de metros a pulgadas es: ";
cout << "convertir metros a cm, km, pies y pulgadas." << endl;
cout << "ingrese la medida en metros para la conversion: " << endl;
cin >> metros;
centimetros = metros * 100;
kilometros = metros / 1000;
pulgadas = metros * 39.37;
pies = metros * 3.281;
cout << mensaje_1 << centimetros << endl;
cout << mensaje_2 << kilometros << endl;
cout << mensaje_3 << pulgadas << endl;
cout << mensaje_4 << pies << endl;
}