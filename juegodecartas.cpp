//Autor: jandry zambrano
//fecha: 15 06 2024
//tema:  juego de cartas
// Diseñe la función que imprima las 52  cartas de un mazo de naipes
#include<iostream>
#include<math.h>
using namespace std;
void imprimircarta(int numero, string tipocarta)
{
cout<<endl;
if(numero==8 && tipocarta == "brillo")
{
    cout<<"╔══════════╗"<<endl; //201 502 187
    cout<<"║ 13       ║"<<endl;//186 04
    cout<<"║          ║"<<endl;//186
    cout<<"║     ♦    ║"<<endl;//186
    cout<<"║          ║"<<endl;//186
    cout<<"║       13 ║"<<endl;//186
    cout<<"╚══════════╝ "<<endl;//200 205 188
    
    }
if(numero==8 && tipocarta== "corazones")
    cout<<"╔══════════╗"<<endl; //201 502 187
    cout<<"║ 13       ║"<<endl;//186 04
    cout<<"║          ║"<<endl;//186
    cout<<"║     ♦    ║"<<endl;//186
    cout<<"║          ║"<<endl;//186
    cout<<"║       13 ║"<<endl;//186
    cout<<"╚══════════╝ "<<endl;//200 205 188
int main ()
{










    return 0;
}

