#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(){

    double a,b,c,delt;

    puts("Benvenuto!");
    puts("Questo programma risolve equazioni di secondo grado della forma: ax^2+bx+c");
    
    puts("Inserisci a");
    scanf("%lf", &a);

    puts("Inserisci b");
    scanf("%lf", &b);

    puts("Inserisci c");
    scanf("%lf", &c);

    printf("La tua equazione è: %5.3lfx^2 + %5.3lfx + %5.3lf \n",a,b,c);

    delt = pow(b,2) - ( 4 * a * c);

    printf("Delta: %5.3lf \n",delt);

    if(delt > 0){
        double sol1 = (-b + sqrt(delt))/ (2*a);
        double sol2 = (-b - sqrt(delt))/ (2*a);

        printf("La soluzioni sono: \nSol1: %5.3lf \nSol2: %5.3lf \n", sol1,sol2);

    }
    else if( delt == 0 ){
        printf("Esistono soluzioni reali e coincidenti pari a: %5.3lf \n", -b/(2*a) );
    }
    else{
        puts("La tua equazione è impossibile");
    }



}