


//Ejemplo del uso de la librería winbgim


//Gráfica de sen(x)


#include<winbgim.h>


#include<stdlib.h>


#include<math.h>


main()


{


const float pi=3.1415;


initwindow(640,480);


for (int x=0;x<640;x++)


putpixel(x,100+50*sin(2*pi*(float)x/640),WHITE);


system("pause");


closegraph(); 


}




//Ejemplo del uso de la librería winbgim


//Dibujo de un rectángulo, un circulo y un cuadrado


#include<winbgim.h>


#include<stdlib.h>


main()


{


initwindow(640,480);


circle(100,100,30);


moveto(50,50);


lineto(100,50);


lineto(100,100);


lineto(50,100);


lineto(50,50);


rectangle(100,100,200,200);


system("pause");


closegraph(); 


}








//Ejemplo del uso de la librería winbgim


//Dibujar con el mouse


#include<winbgim.h>


#include<stdlib.h>


#include<iostream.h>


main()


{


const float pi=3.1415;


initwindow(640,480);


int a=0,x,y;


while(a==0)


{


x=mousex( );


delay(1);


y=mousey( );


delay(1);


if (


lineto(x,y);






};






system("pause");


closegraph(); 


}



//Ejemplo del uso de la librería winbgim


//Pinta toda la pantalla con colores rgb


#include<winbgim.h>


#include<stdlib.h>


#include<iostream.h>


main()


{


int azul;


const float pi=3.1415;


cout << "Valor para el azul? ";


cin >> azul;


initwindow(255,255);


for (int y=1;y<255;y++)


for(int x=1;x<256;x++)


putpixel(x,y,COLOR(x,y,0));






system("pause");


closegraph(); 


}

i
