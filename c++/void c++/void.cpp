#include <iostream>

using namespace std;
//Editando el void de suma
void suma(int num1, int num2)
{
cout<<"Total de la suma es "<<num1+num2<<endl;
}
//Editando el void de resta
void resta(int num1, int num2)
{
 int r=num1-num2;
cout<<"Total de la resta es "<<r<<endl;
}

int main()
{

int a,b;
//adignando valores
cout<<"Ingrese el primer numero\n";
cin>>a;
cout<<"Ingrese el segundo numero\n";
cin>>b;
//usando funciones
suma(a,b);
resta(a,b);



}