//Pograma hecho por; Edwin Alexander Benitez Granados 
//Programa para calcular potencia
#include <iostream> 
using namespace std;
int potencia(double, int);
int main()
{
        int a;
		int b;
		
        cout<<"Introduce numero: "<<endl;
		 cin>>a;
        cout<<"Introduce potencia: "<<endl;
		cin>>b;
        cout << "El resultado es: " << potencia(a,b)<<endl;
        system("PAUSE");
        return 0;
}
int potencia(double a, int b)
{
        if (b<=0)
                return 1;
        else
                return a*potencia(a,b-1);
}
