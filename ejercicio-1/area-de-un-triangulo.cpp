#include <iostream>
using namespace std;
int main() {
int a;
int b;
int h;
string mensaje = "El area del triangulo es: ";
cout << "calcular el area de un triangulo conociendo su base y su altura." << endl;
cout << "Ingrese la base: " << endl;
cin >> b;
cout << "Ingrese la altura" << endl;
cin >> h;
a = (b * h) / 2;
cout << mensaje << a;
}