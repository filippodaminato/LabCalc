#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


int main(){

    int K, N ,a, freq_max;
    int conteggi[20] = { 0 };

    srand(time(0));// init random seed

    do{
        puts("Numero K di esperimenti da fare:");
        scanf("%d", &K);
    }
    while ( !(K >= 10000 && K <= 20000) );

    do{
        puts("Numero N di numeri casuali da generare per ciascun esperimento:");
        scanf("%d", &N);
    }
    while ( !(N > 30 && N < 50) );

    do{
        puts("Limite superiore dell’intervallo chiuso [0, a] in cui generare numeri interi casuali.");
        scanf("%d", &a);
    }
    while ( !(a >= 10 && a <= 20) && (a%2 != 0) );

    for(int x = 0; x < K; x++){

        double somma = 0;

        for(int y = 0; y < N; y++){

            //Generare N numeri interi casuali xi compresi tra [0, a].
            somma += rand()%(a + 1);
        }

        //Calcolare il valore medio degli N valori generati
        double media = somma/N;
        double integer_part;

        printf("Media di %d: %lf \n", x, media);
        modf(media,&integer_part);
        conteggi[(int)integer_part]++;

    }

    freq_max = 0;
    for(int x = 0; x < a ; x++ ){

        if (conteggi[x] > freq_max){
            freq_max = conteggi[x];
        }
        printf("%d  %d \n", x, conteggi[x]);

    }
    
    printf("La frequenza massima è %d", freq_max);




}