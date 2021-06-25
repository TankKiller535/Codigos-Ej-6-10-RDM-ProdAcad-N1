#include <iostream>
#include <math.h>

using namespace std;

int main(){
  //Declaración de variables
  double a,b,c,d1,e,f,g,h,d,P;
  const double pi=3.1415926535;

  //Formalidades:
  cout << "==============================================" << '\n';
  cout << "  Código del Ejercicio 10 del Primer Trabajo" << '\n';
  cout << "       Autor: Suarez Machaca, Sebastián" << '\n';
  cout << "         Resistencia de Materiales I" << '\n';
  cout << "==============================================" << '\n';

  //Se Pide al usuario introducir el diámetro del Pasador y el valor de P
  cout << "Introduzca el valor del diámetro del Pasador:" << '\n';
  cin >> d;
  cout << "Introduzca el valor de la fuerza P:" << '\n';
  cin >> P;

  cout << "---------------------------------------------------------------------" << '\n';

  //Esfuerzo normal Promedio en el elemento AB
  a=(4*P*sin(pi/4))/(sin(5*pi/12)*(1.8-d));
  cout << "Esfuerzo normal Promedio en el elemento AB = " << a <<" ksi.\n";

  //Esfuerzo normal Promedio en el elemento BC
  b=(2*P*sin(pi/3))/(sin(5*pi/12)*(0.9));
  cout << "Esfuerzo normal Promedio en el elemento BC = " << b <<" ksi.\n";

  //Esfuerzo de corte Promedio en el Pin A
  c=(4*P*sin(pi/4))/(sin(5*pi/12)*pi*d*d);
  cout << "Esfuerzo de corte Promedio en el Pin A = " << c <<" ksi. \n";

  //Esfuerzo de corte Promedio en el Pin C
  d1=(4*P*sin(pi/3))/(sin(5*pi/12)*pi*d*d);
  cout << "Esfuerzo de corte Promedio en el Pin C = " << d1 <<" ksi. \n";

  //Esfuerzo Promedio de apoyo en A en AB
  e=(4*P*sin(pi/4))/(sin(5*pi/12)*d);
  cout << "Esfuerzo Promedio de apoyo en A en AB = " << e <<" ksi. \n";

  //Esfuerzo Promedio de apoyo en C en BC
  f=(4*P*sin(pi/3))/(sin(5*pi/12)*d);
  cout << "Esfuerzo Promedio de apoyo en C en BC = " << f <<" ksi. \n";

  //Esfuerzo Promedio de apoyo en B en BC
  g= (2*P*sin(pi/3))/(sin(5*pi/12)*d);
  cout << "Esfuerzo Promedio de apoyo en B en BC = " << g <<" ksi. \n";

  return 0;
}
