#include "Juego.h"
//#include "Movimientos.h"

#include <cstdlib>
#include <iostream>



using namespace std;

void Juego::Jugar()
 {int alt=1,anch,paredes,X1,Y1,mm=1,X1rand,Y1rand;

Movimientoz *s[100][100];
  //empesando se pide la altura que se desea tener
     while(alt<11 || alt>22)
   {
       cout<<"ingrese altura(11 a 22) ";
       cin>>alt;

   }
//luego se pide la anchura que tendra
while(anch<39 || anch>78)
   {
       cout<<" ingrese anchura(39 a 78) "<<endl;
       cin>>anch;

   }


  s[alt+3][anch+3];

//creando la dimension de movimientos que tendra el laberinto
   for(int i=1; i<=alt; i++){
    for(int o=1; o<=anch; o++){

    s[i][o]=new Movimientoz();

   }
   }
for(int i=1; i<=alt; i++){
    for(int u=1; u<=anch; u++){


    s[i][u]->x=1;
                    }
        }


//ahora se le pide ingresar la cantidad de paredes(#) que desea que salgan
   while(paredes<10 || paredes>50)
   {
       cout<<" ingrese la cantidad de paredes de 10 a un maximo de 50 )"<<endl;
       cin>>paredes;

   }

//ahora se le pide ingresar el punto de la fila inicial
//y columna inicial, puntos que no pueden ser mayor a la altura
// o anchura porque
//estaria a fuera del laberinto por lo mismo debe
//ser mayor a 1
  do{
cout<<"ingrese punto de inicio de la fila que no pase de "<<alt<<" no menor a 1 "<<endl;
       cin>>X1; }while(X1>alt);

       do{
 cout<<"ingrese punto de inicio de la columna que no pase de "<<anch<<" y que no sea menor a 1"<<endl;
       cin>>Y1;
}while(Y1>anch);
s[X1][Y1]->x=4;
cout<<"Generando salida "<<endl;



int xxp=1;


       X1rand=(1+rand()%alt);


     Y1rand=(1+rand()%anch);
      s[X1rand][Y1rand]->x=3;//asignandole el lugar de la salida(F)






int PD[51],DP[51],OO=1;

while(OO<=paredes)
{
    PD[OO]=(1+rand()%alt);
    DP[OO]=(1+rand()%anch);
    OO++;
    }
    for(int i=1; i<=paredes; i++)
    {
        s[PD[i]][DP[i]]->x=2;//asignandole lugar a las paredes(#)
    }


int XR,YR;
XR=X1;
YR=Y1;

    while(X1!=X1rand||Y1!=Y1rand){//1=

system("cls");

//imprimiendo el laberinto en el cual
//" " osea el espacio es el camin disponible
// # son paredes por las cuales nmo se pueden pasar
// F es la salida a la cual sedebe llegar
//I es el inicio desde donde se empiesa
for(int i=1; i<=alt; i++){
    for(int u=1; u<=anch; u++){

    if(s[i][u]->x==1){cout<<" ";};//camino
    if(s[i][u]->x==2){cout<<"#";};//paredes
    if(s[i][u]->x==3){cout<<"F";};//salida
    if(s[i][u]->x==4){cout<<"I";};

                    }cout<<endl;
    }//fin fore
    cout<<endl;cout<<endl;cout<<endl;
//a continiacion viene un conjunto de if
//con los cuales se compara movimientos:
//de X1 con X1rand y Y1 con Y1rand
    if(X1<X1rand)

   {X1=X1+1;if(X1>alt){X1=X1-1;}

   if(s[(X1)][Y1]->x==2){if(Y1<Y1rand){s[X1][Y1+1]->x=4;}


      if(s[(X1)][Y1]->x==2){if(Y1<Y1rand){s[X1][Y1+1]->x=4;}


    if(s[(X1)][Y1]->x==2){s[X1][Y1-1]->x=4;}

    if(s[(X1)][Y1]->x==2){s[X1+1][Y1+1]->x=4;}

    if(s[(X1)][Y1]->x==2){s[X1+1][Y1]->x=4;}

   }else {s[X1][Y1]->x=4;}
  }


 }
   //


  if(X1>X1rand

  )
  {X1=X1-1;if(X1<1){X1=X1+1;}
  //
  if(s[(X1)][Y1]->x==2){if(Y1<Y1rand){s[X1][Y1+1]->x=4;}


    if(s[(X1)][Y1]->x==2){s[X1][Y1-1]->x=4;}

    if(s[(X1)][Y1]->x==2){s[X1+1][Y1+1]->x=4;}

    if(s[(X1)][Y1]->x==2){s[X1+1][Y1]->x=4;}

   }else { s[X1][Y1]->x=4;}

 }


  if(Y1<Y1rand

   )
    {Y1=Y1+1;if(Y1>anch){Y1=Y1-1;}
    //
 if(s[(X1)][Y1]->x==2){if(Y1<Y1rand){s[X1+1][Y1]->x=4;}

    if(s[(X1)][Y1]->x==2){s[X1-1][Y1]->x=4;}

    if(s[(X1)][Y1]->x==2){s[X1+1][Y1+1]->x=4;}

    if(s[(X1)][Y1]->x==2){s[X1][Y1+1]->x=4;}

   }else { s[X1][Y1]->x=4;}

 }




  if(Y1>Y1rand

   )
  {Y1=Y1-1;if(Y1<1){Y1=Y1+1;}


   if(s[(X1)][Y1]->x==2){if(Y1<Y1rand){s[X1+1][Y1]->x=4;}


    if(s[(X1)][Y1]->x==2){s[X1-1][Y1]->x=4;}

    if(s[(X1)][Y1]->x==2){s[X1+1][Y1+1]->x=4;}

    if(s[(X1)][Y1]->x==2){s[X1][Y1+1]->x=4;}

   }else { s[X1][Y1]->x=4;}

 }


  //fin de movimiento


if(X1==X1rand && Y1==Y1rand){cout<<"llego al final"<<endl;}


 };

mm++;

 return;
}
