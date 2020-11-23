#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    double a, b;
    printf("Benvenuto!\n Inserisci due numeri compresi tra 0 e 10");

    do
    {
        printf("Inserisci a: ");
        scanf("%lf", &a);
    } while ( !(a >= 0 && a <= 10) );

    do
    {
        printf("Inserisci b: ");
        scanf("%lf", &b);
    } while ( !(b >= 0 && b <= 10) );

    printf(""
    "a+b = %lf \n"
    "sqrt(a) = %lf \n"
    "a^b = %lf \n"
    "e^a + e^b = %lf \n"
    "cos(πb) = %lf \n"
    "succ a = %lf \n"
    "prec b = %lf \n"
    "a/b = %lf \n",
    a+b , sqrt(a), pow(a,b), exp(a) + exp(b), cos(M_PI/b), a+1, b-1 ,fmod(a,b));


    if(fmod(a,2) == 0 ){
        printf("Il numero a = %lf è pari \n", a);
    }
    else
    {
        printf("Il numero a = %lf è pari \n", a);
    }
    

    if(fmod(b,3) == 0){
        printf("Il numero b = %lf è multiplo di 3 \n", b);
    }
    else{
        printf("Il numero b = %lf non è multiplo di 3 \n", b);
    }
}