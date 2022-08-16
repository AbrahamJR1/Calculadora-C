/******************************************************************************
calculadora
*******************************************************************************/
#include <stdio.h>

int main()
{
    float n1, n2, n3, suma, multi, divicion, resta;
    float dls, mex;


    while ( n3 != 0){

    printf("\nPresione 1 si quiere hacer una suma ");
    printf("\n--------------------------------------");
    printf("\nPresione 2 si quiere hacer una multiplicacion");
    printf("\n----------------------------------------------");
    printf("\nPresione 3 si quiere hacer una divicion");
    printf("\n-----------------------------------------");
    printf("\nPresione 4 si quiere hacer una resta");
    printf("\n--------------------------------------");
    printf("\nPresione 5 si quiere convertir pesos a dolares");
    printf("\n--------------------------------------");
    printf("\nPresione 0 si salir");
    printf("\n-----------------------");
    printf("\n");
    scanf("%f",&n3);
    
    
    if ( n3 == 1) {
    printf("Dame el primer dijito: ");
    scanf("%f" ,&n1);
    printf("Dame el segundo dijito: ");
    scanf("%f" ,&n2);
    
    suma = n1 + n2;
    
    printf ("\n La suma es %5.2f" ,suma);
    printf("\n");
    }

    else if ( n3 == 2) {
    printf("Dame el primer dijito: ");
    scanf("%f" ,&n1);
    printf("Dame el segundo dijito: ");
    scanf("%f" ,&n2);
    
    multi = n1 * n2;
    
    printf ("\n La multiplicacion es %5.2f" ,multi);
    printf("\n");
    }


    else if ( n3 == 3) {
    printf("Dame el primer dijito: ");
    scanf("%f" ,&n1);
    printf("Dame el segundo dijito: ");
    scanf("%f" ,&n2);
    
    
    divicion = n1 / n2;
    
    printf ("\n La divicion es %5.2f" ,divicion);
    printf("\n");
    }


    else if ( n3 == 4) {
    printf("Dame el primer dijito: ");
    scanf("%f" ,&n1);
    printf("Dame el segundo dijito: ");
    scanf("%f" ,&n2);
    
    resta = n1 - n2;
    
    printf ("\n La resta es %5.2f" ,resta);
    printf("\n");
    }

    else if (n3 == 5){
        printf ("Dame los pesos");
        scanf("%f",&mex);

        dls = mex * 20.11;
        printf("La convercion de pesos a dls es %5.2f",dls);
        printf("\n");
    }

    else if (n3 == 0){
        printf ("Adios");
        printf("\n");
    }
    
    else{
           printf ("Adios");
           printf("\n");
        }

    }



    return 0;
}
