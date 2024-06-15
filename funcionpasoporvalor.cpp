//Autor: jandry zambrano
//fecha: 15 06 2024
//tema:  Ecuación cuadratica usando paso por referencia
/*
Diseñe la función que resuelva el problema de la ecuación cuadrantica. 
La funcion debe recibir en total de 5  parametros: los 3 primeros son 
los valorres a, b y c que reapresentan los coeficientes de la eciacion.
los 2 parametros restantes representan valores resultantes de 
la ecuación, en este caso x1, y x2 que se deben pasar como rferencias.
la funcion devuelve falso, si la ecuacion presenta errores;
x1 = (-b + raiz(b*b - 4 a*c))//(2*a)
x2 = (-b + raiz(b*b - 4 a*c))//(2*a)
*/

#include<iostream>
#include<math.h>
using namespace std;

bool Ecuacionescuadranticas(double a, double b,double c, double x1, double x2)
{
    if(a==0)//division por cero
    return false;
    //calculo del discriminante
    double d = (b*b) - (4*a*c);
    if(d< 0)//raiz cuadrada negativa
    return false;
    //calcular x1 y x2
double x1 = (-b + sqrt(d)/(2*a));
double x2 = (-b - sqrt(d))/(2*a);

return true; //ecuacion correcta
}
int main ()
{
    double x1, x2;
    bool res =Ecuacioncuadrantica(1, -4,4, x1, x2);
    if(res)
    {
        cout<<endl<"x1="<<x1;<<endl1;
        cout<<endl<"x1="<<x2;<<endl2;
    }
    {
else{
    cout<<"operacion invalida"
}
}
}
