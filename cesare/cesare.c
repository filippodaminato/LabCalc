#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//65-90

int main(){

    char str_in[20]; 
    int correct = 1;
    int str_length = 0;

    do{

        correct = 1;
        str_length = 0;
        printf("Inserisci una parola di 20 caratteri\n");
        scanf("%s", str_in);

        printf("La parola inserita è %s \n", str_in);

        // ottengo la lunghezza
        int x = 0;

        while (str_in[x++] != '\0')
        {
            str_length++;
        }

        printf("La lunghezza è: %d\n",str_length);


        // controllo che siano tutte maiuscole
        for (int x = 0; x < str_length; x++)
        {
            if(str_in[x] < 'A' || str_in[x] > 'Z'){
                correct = 0;
                printf("ERRORE! - Il carattere in posizione %d non è maiuscolo\n", x);
            }

        }


    
    }
    while (str_length > 12 || !correct);

    // conto vocali e consonanti
    char vocali[] = { 'A','E','I','O','U','Y' };
    int vacali_length = 6;
    int voc, con = 0;

    for (int x = 0; x < str_length; x++)
    {
        for (int i = 0; i < vacali_length; i++)
        {
            if(str_in[x] == vocali[i]){ voc++; }
 
        }
    }

    con = str_length - voc;

    printf("La parola contiene %d vocali e %d consonanti\n",voc,con);

    char str_tradotta[str_length+1];

    for (int x = 0; x < str_length ; x++)
    {   
        if(str_in[x] -3 < 'A'){

            int pos = 'Z' - ('A' - (str_in[x] - 3 ) ) + 1;
            str_tradotta[x] = (char)pos;

        }
        else{

            str_tradotta[x] = str_in[x] - 3;
        }
    }

    str_tradotta[str_length] = '\0'; 
    
    printf("La traduzione è: %s \n", str_tradotta);
    
    
    int giusto = 1;
    for(int x = 0; x < str_length/2; x++){
        // printf("Paragono %c con %c \n", str_tradotta[x], str_tradotta[str_length-1-x]);
        if( str_tradotta[x] != str_tradotta[str_length-1-x]){
            giusto = 0;
        }
    }

    if(giusto){
        printf("La parola è palindroma");
    }
    else{
        printf("La parola non è palindorma");
    }


}

//FHVDUH RUR ILVLFD LQJHJQL