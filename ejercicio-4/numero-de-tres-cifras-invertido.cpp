#include <iostream>
using namespace std;
int main() {
int numero_normal = 0;
int numero_invertido = 0;
string mensaje = "El numero invertido del numero ingresado es: ";
cout << "dado un numero de 3 cifras invertir el numero. ej: 791 es, 197." << endl;
cout << "Ingrese un numero " << endl;
cin >> numero_normal;
while (numero_normal != 0)
{
    numero_invertido = (numero_invertido * 10) + numero_normal % 10;
    numero_normal = numero_normal / 10;
}
cout << mensaje << numero_invertido;
return 0;
}