#include <iostream>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std; 
void num();
void mult(float x);
float y;
float x;
float c;
int main() {
	cout<<"Introduzca un numero: "<<endl;
	cin>>y;
	c = y * 10;
	cout<<"El resultado es: "<<c;	
	void num();
	void mult(float num1);
	
	getch();
	return 0;
}

void num(){
	cout<<"Introduzca un numero: "<<endl;
	cin>>y;
}
void mult(float x){
	float multiplicacion = x * 10;
	
	cout<<"la multiplicacion es: "<<multiplicacion<<endl;
}


