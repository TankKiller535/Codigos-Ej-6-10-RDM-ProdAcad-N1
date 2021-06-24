#include <iostream>
#include <math.h>

using namespace std;

int main(){
  //Declaración de variables
  int n, unidad, i, j, i1;
  double SumP, Area, EsfPro;
  const double pi=3.1415926535;

  //Formalidades:
  cout << "==============================================" << '\n';
  cout << "  Código del Ejercicio 6 del Primer Trabajo" << '\n';
  cout << "       Autor: Suarez Machaca, Sebastián" << '\n';
  cout << "         Resistencia de Materiales I" << '\n';
  cout << "==============================================" << '\n';

  //Se pide al usuario introducir el número de cilindros soldados
  cout << "Introduzca el número de cilindros soldados del sistema:" << '\n';
  cin >> n;

  //Declaramos los vectores a usar:
  double P[n],d[n];

  //Bucle que impide que la opción seleccionada sea incorrecta
  SistUni:
  cout << "Selecciona el Sistema de Unidades:" << '\n';
  cout << "1. Sistema Internacional de Unidades (N y m)" << '\n';
  cout << "2. Sistema Imperial de Unidades (Kip y pulg.)" << '\n';
  cin >> unidad;

  if (unidad!=1 && unidad!=2) {
    cout << "==============================================" << '\n';
    cout << "        SELECCIONE UNA OPCIÓN VÁLIDA" << '\n';
    cout << "==============================================" << '\n';
    goto SistUni;
  } else {
    cout << "---------------------------------------------------------------------" << '\n';
  }

  //Input de fuerzas aplicadas
  cout << "Introduzca los valores para las fuerzas aplicadas en cada cilindro:" << '\n';
  for (i = 0; i < n; i++) {
    i1=i+1;
    cout << "Fuerza aplicada en el cilindro N° " << i1 << " = ";
    cin >> P[i];
  }

  cout << "---------------------------------------------------------------------" << '\n';

  //Input de diámetros de los cilindros
  cout << "Introduzca los valores para los diámetros de cada cilindro:" << '\n';
  for (i = 0; i < n; i++) {
    i1=i+1;
    cout << "Diámetro del cilindro N° " << i1 << " = ";
    cin >> d[i];
  }

  cout << "---------------------------------------------------------------------" << '\n';

  //Cálculo del Esfuerzo Pormedio en cada cilindro
  for (i = 0; i < n; i++) {
    SumP=0.0;
    for (j = 0; j <= i; j++) {
      SumP+=P[j];
    }
    Area=pi*(d[i]*d[i])/4.0;
    EsfPro=SumP/Area;
    i1=i+1;
    if (unidad==1) {
      cout << "El Esfuerzo Promedio para el cilindro N° " << i1 << " es " << EsfPro << " Pa.\n";
    } else {
      cout << "El Esfuerzo Promedio para el cilindro N° " << i1 << " es " << 1000*EsfPro << " PSI.\n";
    }
  }
  return 0;
}
