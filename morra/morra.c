#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>


int getN(){

    int giocate = 0;
    
    do
    {
        puts("Quante giocate vuoi simulare?");
        scanf("%d", &giocate);

    } while (giocate < 0 || giocate > 20);
    
    return giocate;

}

int getto(){

    return(rand()%3);// 0 - 1 - 2 (S - C - F)

}

// Ritorna su giocatore A
char decido(int gettoA, int gettoB){

    /*

    Tabella di risultati

      |  S |  C |  F
    --+----+----+-----
    S |  D |  L |  W
    --+----+----+-----
    C |  W |  D |  L
    --+----+----+-----
    F |  L |  W |  D
    --+----+----+-----

    */

    char res[3][3] = {
        {'d','l', 'w'},
        {'w','d', 'l'},
        {'l','w', 'd'},
    };

    return res[gettoA][gettoB];

}

int main(){

    srand(time(0));// init random seed

    int puntiA = 0,puntiB = 0;
    int giocate = getN();
    
    for (int x = 0; x < giocate; x++)
    {
        char res = decido(getto(),getto());

        if(res == 'd'){
            // Draw
            puntiA++;
            puntiB++;

        }
        else if (res == 'w')
        {
            // Win A
            puntiA++;
            
        }
        else
        {
            // Lose A
            puntiB++;
            
        }  

        // printf("Giocata %d - A = %d | B = %d \n", x+1,puntiA,puntiB);
        printf("%d\t%d\t%d\n", x+1,puntiA,puntiB);

        
    }

    if(puntiA > puntiB){
        puts("Vince A");
    }
    else if (puntiB > puntiA )
    {
        puts("Vince B");
    }
    else
    {
        puts("Pareggio");
    }
    
    
    
}



