#include <iostream>
using namespace std;
int main() {
float f;
float c;
string mensaje = "La conversion de temperatura de celsius a farhrenheint es: ";
cout << "convertir una temperatura dada en grados celsius a grados fahrenheit." << endl;
cout << "Ingrese la temperatura en celsius para hacer la conversion " << endl;
cin >> c;
f = (c*9/5)+32;
cout << mensaje << f;
}