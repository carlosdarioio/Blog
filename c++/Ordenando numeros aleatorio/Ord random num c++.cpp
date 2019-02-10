/*
Hi en este ejemplo de c++ mostrare

Crear un programa que genere tres numeros aleatorios los cuales
debe mostrarlos y luego ordenarlos de menor a mayor para mostrarlos
nueva mente

*/

#include <iostream> //diva
#include <cstdlib> //incluye la funcion RAND (random)

using namespace std;
int main(){
double a[2],num1,num2,num3;
int cont=0;
//asignando numero aleatorio
for(int i=0;i<3;i++)
{
a[i]=(5 + rand() % 10);
cout<<"Numero: "<<a[i]<<endl;
}

cout<<"Ordenandolos..."<<endl;
num1=a[0];
num2=a[1];
num3=a[2];
//ordenandolos
if(num1<=num2 and num1<=num3)
{
    a[cont]=num1;
    cont++;

    if(num2<num3)
    {
        a[cont]=num2;
         cont++;
         a[cont]=num3;
    }
    else{

        a[cont]=num3;
          cont++;
        a[cont]=num2;
    }
}
else if(num2<=num1 and num2<=num3)
{
    a[cont]=num2;
    cont++;

    if(num1<num3)
    {
        a[cont]=num1;
         cont++;
         a[cont]=num3;
    }
    else {

        a[cont]=num3;
          cont++;
        a[cont]=num1;
    }

}
else if(num3<=num1 and num3<=num2)
{
    a[cont]=num3;
    cont++;

    if(num1<num2)
    {
        a[cont]=num1;
         cont++;
         a[cont]=num2;
    }
    else {

        a[cont]=num2;
          cont++;
        a[cont]=num1;
    }

}


//mostrando
cout<<"Mostrandolos"<<endl;
for(int i=0;i<3;i++)
{

cout<<a[i]<<endl;
}



}
