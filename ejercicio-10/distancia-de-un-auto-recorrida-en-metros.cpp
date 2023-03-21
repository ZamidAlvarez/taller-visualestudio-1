#include <iostream>
using namespace std;
int main() {
float velocidad;
float tiempo;
float distancia = 0;
string mensaje = "la distancia que recorrio el auto en metros es de: ";
cout << "dada la velocidad en Km/h y el tiempo que un auto se mueve, calcular la distancia recorrida en metros." << endl;
cout << "ingrese la velocidad en kilometros por hora del auto: " << endl;
cin >> velocidad;
cout << "ingrese el tiempo en horas en el que el auto se mueve: " << endl;
cin >> tiempo;
distancia = (velocidad * tiempo) * 1000;
cout << mensaje << distancia << " metros";

}