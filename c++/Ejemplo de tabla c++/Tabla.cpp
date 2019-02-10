#include <iostream.h>
using namespace std;
int main()
{
int Tabla;
int i;
cout << "Qué tabla deseas: ";
cin >> Tabla;
if (Tabla >=1 & Tabla<=10 )
{
i=1;
do
{
cout << Tabla << " X "<< i << " = "<< Tabla*i << endl;
i+=1;
}
while (i <= 10);
}
else
{
cout << "Valido solo del 1 al 10" << endl;
}
 }
