#include <stdio.h>

int recursiva(int num);

    int main(void){
        int numero;

        scanf("%d", &numero);
        int r =  recursiva(numero);
        printf("%d\t", r);
        
    }

    int recursiva(int num){
        int calc_fat;

        if(num <=1){
            return (1);
        }

        else { 
            calc_fat = num * recursiva(num -1);
            return (calc_fat);
        }
    }

