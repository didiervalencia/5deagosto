/*programa que calcula es descuento
nombre:muñoz chavez,mendez valencia
curso:2 do "c" informatica
fecha:25/05/2023*/
#include <iostream>
using namespace std;
int main()
{
float precio,descuento,resultado,Vtotal;
cout<<"ingrese precio:";
cin>>precio;
cout<<"ingrese descuento:";
cin>>descuento;
resultado=(precio*descuento)/100;
Vtotal=precio-resultado;
cout<<"Vtotal es:"<<Vtotal;
return 0;
}