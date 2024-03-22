#include <stdio.h>
#define tam 8

    int busca(int vetor[], int inicio, int final, int item);

    int main(){

        int vetor[] = {0, 5, 7, 9, 13, 22, 29, 47};
        int item,r;
    
        printf("Insira o item procurado:\n");
        scanf("%d", &item);

        r = busca(vetor, 0, 7, item);

        if(r == -1){
            printf("O item não está no vetor\n");
        }

        else{
            printf("O item esta na posição %d\n", r);
        }

        return 0;
}


    int busca(int vetor[], int inicio, int final, int item){

        int meio = (inicio + final)/2;

        //se não estiver no vetor
        if(inicio > final){
            return -1;
        }

        //se for igual o item procurado
        if(item == vetor[meio]){
            return meio;
        }

        //item esta a direita do vetor
        if(item > vetor[meio]){
            return(busca(vetor,meio +1, final, item));
        }

        //item esta a esquerda do vetor
        if(item < vetor[meio]){
            return(busca(vetor, inicio, meio -1, item));
        }

        return -1;
    }