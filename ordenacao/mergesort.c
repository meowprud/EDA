#include<stdio.h>
#define tam 8

    void intercala(int vetor[], int inicio, int final, int meio);
    void mergeSort(int vetor[], int inicio, int final);

    int main (){

        int vetor[tam], i;

        for(i=0; i<tam;i++){
            printf("Entre com o %dº número\n", i+1);
            scanf("%d", &vetor[i]);
        }

        mergeSort(vetor, 0, tam-1);

        for(i=0; i<tam; i++){
            printf("%d\t", vetor[i]);
        }

        return 0;
    }

    void mergeSort(int vetor[], int inicio, int final){
    
    int meio;

        if(inicio < final){

            meio = (inicio+final)/2;
            mergeSort(vetor, inicio, meio);
            mergeSort(vetor, meio+1, final);
            intercala(vetor, inicio, final, meio);
        }
    }

    void intercala(int vetor[], int inicio, int final, int meio){

        int conta; int aux[tam]; int livre = inicio; int inicio1 = inicio;
        int inicio2 = meio +1;

        while(inicio1 <= meio && inicio2 <= final){

            if(vetor[inicio1] < vetor[inicio2]){
                aux[livre] = vetor[inicio1];
                inicio1++;
            }
            else{
                aux[livre] = vetor[inicio2];
                inicio2++;  
            }
            livre++;
        }
        for(conta = inicio1; conta <=meio; conta++){
            aux[livre] = vetor[conta];
            livre++;
        }
        for(conta = inicio2; conta <=final; conta++){
            aux[livre] = vetor[conta];
            livre++;
        }
        for(conta = inicio; conta<=final; conta++){
            vetor[conta] = aux[conta];
        }

    }


