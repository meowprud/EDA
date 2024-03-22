#include <stdio.h>

#define TAM 8

void quickSort(int vetor[], int inicio, int final);
int particiona(int vetor[], int inicio, int final);
void troca(int *x, int *y);


    int main(){
        
        int vetor[TAM];

        for(int i=0; i<TAM; i++){
            printf("Insira o %dº número\n",i+1);
            scanf("%d", &vetor[i]);
        }

        quickSort(vetor, 0, TAM-1);

        for(int j=0; j<TAM; j++){
            printf("%d\t", vetor[j]);
        }

        return 0;
    }   

    void quickSort(int vetor[], int inicio, int final){
        
        if(inicio < final){
            int pivo = particiona(vetor, inicio, final);
            quickSort(vetor, inicio, pivo - 1);
            quickSort(vetor, pivo +1, final);
        }
    }

    int particiona(int vetor[], int inicio, int final){

        int pivo = vetor[final];
        int i = inicio -1;

        for(int j = inicio; j<final; j++){

            if(vetor[j] < pivo){
                i++;
                troca(&vetor[i], &vetor[j]);
            }
        }

        troca(&vetor[i+1], &vetor[final]);
        return(i+1);

    }   

    void troca(int *x, int *y){

        int trocou = *x;
        *x = *y;
        *y = trocou;
    }
