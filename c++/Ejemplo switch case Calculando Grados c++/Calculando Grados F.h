#include <iostream> //diva♥


using namespace std;
int main(){
double n,F,C,K;
string result;
         int accion;
         accion=0;
         F =0;
         C=23;
         K=0;


        while(accion!=1 && accion!=2 && accion!=3 && accion!=4 && accion!=5 && accion!=6){
                cout<<"Seleccione la conversion que quiere haser"<<endl;
         cout<<"1. Fahrenheit a Celsius"<<endl;
          cout<<"2. Fahrenheit a Kelvin"<<endl;
           cout<<"3. Celsius a Farenheit"<<endl;
            cout<<"4. Celsius a Kelvin"<<endl;
    cout<<"5. Kelvin a Fahrenheit"<<endl;
     cout<<"6. Kelvin a Celsius"<<endl;
 cin>>accion;

       if(accion!=1 && accion!=2 && accion!=3 && accion!=4 && accion!=5 && accion!=6){
          cout<<"Error: ingrese el numero de alguna accion"<<endl;accion=0;}

                                          }
    switch(accion){
                    case 1 :
       //Fahrenheit a Celsius   C =(F-32)*5/9
     cout<<"Ingrese cantidad de Fahrenheit para convertir a Celsius"<<endl;
     cin>>F;
     C =(F-32)*5/9;
     cout<<"El total de celsius es: "<<C<<endl;
                   break;
                   case 2 :
     //Fahrenheit a Kelvin K = (F-32)*5/9 +273
     cout<<"Ingrese cantidad de Fahrenheit para convertir a kelvin"<<endl;
     cin>>F;
     K = (F-32)*5/9 +273;
     cout<<"El total de Kelvin es: "<<K<<endl;
                break;
                case 3 :
      //Celsius a Fahrenheit  F =C*9/5+32
     cout<<"Ingrese cantidad de Celsius para convertir a Farenheit"<<endl;
     cin>>C;
     F =C*9/5+32;
     cout<<"El total de Farenheit es: "<<F<<endl;
                break;

    case 4 :
     //Celsius a Kelvin K=C+273
     cout<<"Ingrese cantidad de Celsius para convertir a Kelvin"<<endl;
     cin>>C;
      K=C+273;
      cout<<"El total de Kelvin es: "<<K<<endl;
                break;

    case 5 :
     //Kelvin a Fahrenheit   F= (k-273)9/5+32
     cout<<"Ingrese cantidad de Kelvin para convertir a Fahrenheit"<<endl;
     cin>>K;
     F=(K-273)*9/5+32;
      cout<<"El total de Farenheit es: "<<F<<endl;
                break;

    case 6 :
     //Kelvin a Celsius C=K-273
     cout<<"Ingrese cantidad de Kelvin para convertir a Celsius"<<endl;
     cin>>K;
      C=K-273;
       cout<<"El total de Celsius es: "<<C<<endl;
                break;




}
}