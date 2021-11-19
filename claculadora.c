/******************************************************************************
calculadora
*******************************************************************************/
#include <stdio.h>

int main()
{
    float n1, n2, n3, suma, multi, divicion, resta;
    float dls, mex;


    while ( n3 != 0){

    printf("\nPrecione 1 si quiere hacer una suma ");
    printf("\n--------------------------------------");
    printf("\nPrecione 2 si quiere hacer una multiplicacion");
    printf("\n----------------------------------------------");
    printf("\nPrecione 3 si quiere hacer una divicion");
    printf("\n-----------------------------------------");
    printf("\nPrecione 4 si quiere hacer una resta");
    printf("\n--------------------------------------");
    printf("\nPrecione 5 si quiere convertir pesos a dolares");
    printf("\n--------------------------------------");
    printf("\nPrecione 0 si salir");
    printf("\n-----------------------");
    printf("\n");
    scanf("%f",&n3);
    
    
    if ( n3 == 1) {
    printf("dame el primer dijito: ");
    scanf("%f" ,&n1);
    printf("dame el segundo dijito: ");
    scanf("%f" ,&n2);
    
    suma = n1 + n2;
    
    printf ("\n la suma es %5.2f" ,suma);
    printf("\n");
    }

    if ( n3 == 2) {
    printf("dame el primer dijito: ");
    scanf("%f" ,&n1);
    printf("dame el segundo dijito: ");
    scanf("%f" ,&n2);
    
    multi = n1 * n2;
    
    printf ("\n la multiplicacion es %5.2f" ,multi);
    printf("\n");
    }


    if ( n3 == 3) {
    printf("dame el primer dijito: ");
    scanf("%f" ,&n1);
    printf("dame el segundo dijito: ");
    scanf("%f" ,&n2);
    
    
    divicion = n1 / n2;
    
    printf ("\n la divicion es %5.2f" ,divicion);
    printf("\n");
    }


    if ( n3 == 4) {
    printf("dame el primer dijito: ");
    scanf("%f" ,&n1);
    printf("dame el segundo dijito: ");
    scanf("%f" ,&n2);
    
    resta = n1 - n2;
    
    printf ("\n la resta es %5.2f" ,resta);
    printf("\n");
    }

    if (n3 == 5){
        printf ("Dame los pesos");
        scanf("%f",&mex);

        dls = mex * 20.11;
        printf("La convercion de pesos a dls es %5.2f",dls);
        printf("\n");
    }

    if (n3 == 0){
        printf ("Adios");
        printf("\n");
    }

    }



    return 0;
}