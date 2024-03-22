#include <stdio.h>

int fibonacci(int num){

    if(num <=2){
        return 1;
    }

    else{

        return(fibonacci(num-1) + fibonacci(num-2));
    }
}

int main(void){

    int num, i;

    printf("Escolha a quantidade de termos da sequência:\n");
    scanf("%d", &num);

    for(i=0;i<num;i++){

        printf("%d\t", fibonacci(i+1));
    }

    return 0;
}