#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


double genera_lanci(int minimo, int massimo){
  double a, b;
  a= (double) rand()/RAND_MAX * (massimo-minimo)+minimo;

  for(int i=0; i<2; i++){

    b= (double) rand()/RAND_MAX * (massimo-minimo)+minimo;
    if(b>a){
      a=b;
    }

  }
  return a;
}    
void competizione(double lanci[]){

  for(int i=0; i<200; i++){
    lanci[i]=genera_lanci(20,70);
  }

}
void ordina(int *codici, double *lanci){

    double temp_1=0;
    int temp_2=0;

    int scambio = 1;
    while (scambio)
    {   
        scambio = 0;
        for(int i = 0; i<200-1; i++){
            if(lanci[i]<lanci[i+1]){

                temp_1=lanci[i];
                lanci[i]=lanci[i+1];
                lanci[i+1]=temp_1;


                temp_2=codici[i];
                codici[i]=codici[i+1];
                codici[i+1]=temp_2;
                scambio = 1;

            } 
        }
    }

    for (int x = 0; x < 200; x++)
    {
        printf("%d - %lf\n", codici[x], lanci[x]);
    }
    



}


int main(){
    int codici[200]={0};
    double lanci[200]={0};

    srand(time(0));
    FILE *fp;

    fp=fopen("DANIELE_DESANTIS.dat", "w+");

    for(int i=0; i<200; i++){
        codici[i]=i+1000;
        competizione(lanci);
    }

    ordina(codici, lanci);
    printf("stampa ordinata\n");

    fclose(fp);
}