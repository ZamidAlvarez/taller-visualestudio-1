#include <iostream>
using namespace std;
int main() {
float inversionista_1;
float inversionista_2;
float inversionista_3;
float porcentaje_1 = 0;
float porcentaje_2 = 0;
float porcentaje_3 = 0;
int inversion_total = 0;
string mensaje_1 = "El inversionista 1 invirtio un porcentaje de: ";
string mensaje_2 = "El inversionista 2 invirtio un porcentaje de: ";
string mensaje_3 = "El inversionista 3 invirtio un porcentaje de: ";
string mensaje_4 = "El total de inversion es de: ";
cout << "tres personas deciden invertir su dinero para crear una empresa. cada una de ellas invierte una cantidad distinta. obtener el porcentaje que cada uno invierte con respecto a la cantidad total invertida." << endl;
cout << "Ingrese el dinero del inversionista 1 " << endl;
cin >> inversionista_1;
cout << "Ingrese el dinero del inversionista 2 " << endl;
cin >> inversionista_2;
cout << "Ingrese el dinero del inversionista 3 " << endl;
cin >> inversionista_3;
inversion_total = (inversionista_1 + inversionista_2 + inversionista_3);
porcentaje_1 = (inversionista_1 / inversion_total) * 100;
porcentaje_2 = (inversionista_2 / inversion_total) * 100;
porcentaje_3 = (inversionista_3 / inversion_total) * 100;
cout << mensaje_4 << inversion_total << endl;
cout << mensaje_1 << porcentaje_1 << "%" << endl;
cout << mensaje_2 << porcentaje_2 << "%" << endl;
cout << mensaje_3 << porcentaje_3 << "%" << endl;
}