//como imprimir un entero sin signo en bits
#include <iostream>
using::std::cout;
using::std::cin;
using::std::endl;
#include <iomanip>
using::std::setw;

void mostrarBits(unsigned);//prototipo

int main()
{

    unsigned valorEntrada;//numero que se ocnvertira en binario
    cout<<"escriba un entero: ";
    cin>>valorEntrada;
    mostrarBits(valorEntrada);
    return 0;


}

//muestra los bits de un valor entero
void mostrarBits( unsigned valor)
{
    const int DESPL = 8 * sizeof(unsigned)-1;
    const unsigned MASCARA=1<<DESPL;

    cout<<setw(10)<<valor<<" =";
    //muestra los bits
    for(unsigned i=1;i<=DESPL+1;i++)
    {
        cout<<(valor & MASCARA ? '1':'0');
        valor<<=1;//desplaza el valor a la izquierda por 1

        if(i%8==0)//imprime un espacio despues de 8 bits
            {
              cout<<' ';
            }
    }//fin del for
    cout<<endl;
}//fin de la funcion mostrar bits
