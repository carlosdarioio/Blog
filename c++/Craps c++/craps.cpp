//appletenhtml
#include <iostream> //diva
#include <cstdlib> //incluye la funcion RAND (random)

using namespace std;
using std::rand;
using std::srand;
#include<ctime>//contiene el prototipo para la funcion time
using std::time;
int tirarDados()
{
    int dado1= 1+rand()%6;//tiro del primer dado
    int dado2= 1+rand()%6;//tiro del segundo dado
    int suma=dado1+dado2;//calcula la suma de valores de los dados

    //mostrando resultado de este tiro
    cout<<"El jugador tiro "<<dado1<<" + "<<dado2<<" = "<<suma<<endl;
  return suma;//devuelve la suma de los dados
}//fin funcion tirar dados

int main(){
string estado="";
int miPunto;//punto si no se gana o pierde en el primer turno
srand(time(0));
int sumaDeDados=tirarDados();

          // numeroaleatorio = (1 + rand() % 100);
//determinando estado del juego
switch(sumaDeDados)
{
case 7://gana con 7 en el primer turno
case 11:    //gana con 11 en el primer turno
    estado="gano";
break;
case 2://pierde con 2 en el primer turno
case 3://pierde con 3 en el primer turno
case 12: //pierde con 12 en el primer turno
  estado="perdio";
break;
default://no gano ni perdio por lo que recuerda el numero
   estado="continuar";
   miPunto=sumaDeDados;//recuerda el punto
   cout<<"El punto es "<<miPunto<<endl;
   break;//opcional al final de switch
}//fin de switch

      //mientras el juego no este completo
      while(estado=="continuar")//no gano ni perdio
      {
          sumaDeDados=tirarDados();//tira los dados de nuevo
          //determina el estadi dek juego
          if(sumaDeDados==miPunto)
          {
              estado="gano";
          } else if(sumaDeDados==7)//pierde al tirar 7 antes de punto
                 {
                     estado="perdio";
                 }
      }  //fin del while

//muestra mensaje que gano o perdio
if(estado=="gano")
{
    cout<<"El jugador gana"<<endl;
}else{cout<<"El jugador pierde"<<endl;}
}
//tirarDados calcula la suma y muestra los resultados


