#include <iostream>
using namespace std;
int main() {
int año_actual;
int año_nacimiento;
int edad_actual;
string mensaje = "la persona tiene: ";
// cabe aclarar profe que ud dijo año de nacimiento no fecha de nacimiento asi que no es del todo exacto el resultado
cout << "calcular la edad de una persona en base al año de su nacimiento y al año actual." << endl;
cout << "ingrese el año de nacimiento de la persona y el año actual" << endl;
cin >> año_nacimiento;
cin >> año_actual;
edad_actual = año_actual - año_nacimiento;
cout << mensaje << edad_actual << " años de edad";
}