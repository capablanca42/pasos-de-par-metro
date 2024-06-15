
//Autor: jandry zambrano
//fecha: 15 06 2024
//tema: pasos de parametros por parametro

#include<iostream>
using namespace std;
//ejemplo paso de parametros por parametro
 int pasoporvalor(int a)
 
 {
      a = a *10;
    cout<<endl<<"el valor de la variable dentro de la función :"<<a;
return 1;
  }

  int main (){
    int  num= 2;
    cout<<endl<<"  valor la variable antes de llamar a la función"<<num;
    pasoporvalor(num);
   cout<<endl<< "  valor la variable antes de llamar a la función"<<num;
    return 0;
    }