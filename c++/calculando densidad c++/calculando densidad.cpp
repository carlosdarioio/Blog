/*
Hi en este ejemplo de c++ mostrare un programa que calcule la densidad
de x lugar, la densidad se optiene el numero de abitantes por el
are total es decir:
                 densidad=numero de habitantes/superficie

    aqui el codigo

*/

#include <iostream> //diva
#include <cstdlib> //incluye la funcion RAND (random)

using namespace std;
int main(){
double d,h,s;
cout<<"Ingrese cantidad de habitantes: "<<endl;
cin>>h;

cout<<"Ingrese superficie: "<<endl;
cin>>s;
d=h/s;
cout<<d<<" hab/km"<<endl;



}
