//Programa hecho por Edwin Alexander Benitez Granados
//Programa para calcular area de cuadrado y volumen de un cubo
#include <iostream>
#include <math.h>
using namespace std;

void area();
void area2();
int a;
int b;
int area1;
int areaa;
int main(){
	cout<<"ingrese el lado del cuadrado"<<endl;
    cin>>a;
    cout<<"El Area del cuadrado es de: ";area();
    cout<<endl;
	cout<<"ingrese el lado del cubo"<<endl;
    cin>>b;
    cout<<endl;
    cout<<"El Area del cubo es de: "<<endl;
	area2();
	
	
   return 0;
}
void area()
{
    area1=a*a;
    cout<<area1;
}
void area2()
{
	areaa= pow(b,3);
    cout<<areaa;

}
