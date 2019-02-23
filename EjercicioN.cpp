//Programa hecho por : Edwin Alexander Benitez Granados
//Programa de intercambio de valores con punteros
#include <iostream>
#include <stdio.h>
 using namespace std;
void mayor(int *x, int *y);
int main()
{
    int a;
    int b;
    
    cout<<"Introduce un numero: "<<endl;
	cin>>a;
	cout<<"Introduce otro numero: "<<endl;
	cin>>b;
	
     mayor(&a, &b);
     printf("a: %d\nb: %d\n", a, b);
     
    return 0;
}

void mayor(int *x, int *y)
{
    int aux;
     
    aux = *x;
    *x = *y;
    *y = aux;
}
