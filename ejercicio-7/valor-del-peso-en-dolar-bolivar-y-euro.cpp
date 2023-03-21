#include <iostream>
using namespace std;
int main() {
// 1 dolar=2500 pesos, 1 euro=3000 pesos, 1 bolivar=0.52 pesos.
float pesos;
float dolares = 0;
float bolivares = 0;
float euros = 0;
string mensaje_1 = "La conversion de pesos a dolares es de: ";
string mensaje_2 = "La conversion de pesos a bolivares es de: ";
string mensaje_3 = "La conversion de pesos a euros es de: ";
cout << "dado un valor en pesos y conociendo la tasa de cambio del dolar, el bolivar y el euro con respecto al peso, determine a cuanto equivale el valor dado en pesos, en cada una de estas otras monedas." << endl;
cout << "ingrese el valor en pesos colombianos: " << endl;
cin >> pesos;
dolares = pesos / 2500;
bolivares = pesos / 0.52;
euros = pesos / 3000;
cout << mensaje_1 << dolares << " dolares" << endl;
cout << mensaje_2 << bolivares << " bolivares" << endl;
cout << mensaje_3 << euros << " euros" << endl;
}