#include  <stdio.h>
#include "cs50.h"

int main (void){
    printf("this is for loop\n");
    for (int i = 0; i < 3; i++){
        printf("meow\n");
    }

    int i=0;
    printf("this is plus\n");
    while (i < 3){
        printf("meow\n");
        i++;
    }

    i=3;
    printf("this is minus\n");
    while (i > 0){
        printf("meow\n");
        i--;
    }

    printf("this is infinite loop\n");
    while (true){

        printf("meow\n");
    }
}
