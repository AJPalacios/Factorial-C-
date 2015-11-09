#include <stdio.h>



int main()
{
    int numero,factorial;
    numero;
    factorial=1;

    printf("Dame un numero para calcular su factorial: \n");
    scanf("%d",&numero);

    while(numero!=0){
        factorial = numero * factorial;
        numero--;
    }
    printf("El factorial es: %d",factorial);

    return 0;
}
