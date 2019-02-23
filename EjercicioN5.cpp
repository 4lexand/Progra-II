//Hecho Por Edwin Alexander Benitez 
//Numero menor
#include <iostream>
using namespace std;


  int main(void) {

    float numero;
    float anterior_numero;

    float mayor;
    float menor;

    printf("Ingresa un numero: \n");
    scanf("%f", &anterior_numero);

    printf("Ingresa otro numero\n");
    scanf("%f", &numero);

    mayor = anterior_numero;
    menor = anterior_numero;

    while((numero<100) && (numero>0))
    {
        if(numero<=menor)
        {
            menor = numero;
            printf(" El nuevo numero menor es %f!\n", menor);
        }
        else if(numero>=mayor)
        {
            mayor = numero;
            printf(" El nuevo numero mayor es %f!\n", mayor);

        }

        scanf("%f", &numero);       
    } 
    printf("El numero mayor es %f\n", mayor);
    printf("El numero menor es %f\n", menor);


return 0;
}
