#include <iostream>
using namespace std;
int main() {
int edad_1;
int edad_2;
int edad_3;
int contador_edades;
int promedio_edad;
string mensaje = "El promedio de las edades es: ";
cout << "dada la edad de tres personas calcular el promedio de edad." << endl;
cout << "Ingrese la edad 1 " << endl;
cin >> edad_1;
contador_edades = contador_edades + 1;
cout << "Ingrese la edad 2 " << endl;
cin >> edad_2;
contador_edades = contador_edades + 1;
cout << "Ingrese la edad 3 " << endl;
cin >> edad_3;
contador_edades = contador_edades + 1;
promedio_edad = (edad_1 + edad_2 + edad_3) / contador_edades;
cout << mensaje << promedio_edad;
}