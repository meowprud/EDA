#include <stdio.h>

/*Crie dois vetores, A e B, cada um com 10
elementos inteiros, depois faça:

i.Intercalação dos elementos de A e B(crie um vetor C).
ii. Busca de um determinado elemento no vetor C.
iii. Remoção dos dois primeiros elementos de A.*/

int main(){

    int a[10] = {0,2,4,6,8,10,12,14,16,18};
    int b[10] = {1,3,5,7,9,11,13,15,17,19};
    int c[20] = {0};
    int i,j,k;

    while(i<10 && j<10){
        c[k++]= a[i++];
        c[k++]=b[j++];
    }

    for(k=0; k<20; k++){
        printf("%d\n", c[k]);
    }

    return 0;
}