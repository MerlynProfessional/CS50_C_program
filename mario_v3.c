#include <stdio.h>
#include "cs50.h"

int print_row(int width);

int main(void){
    const int n=3;
    for(int i=0;i<n;i++){ //this code is for column printing 
        print_row(n);
    }
}

int print_row(int width){ //this code is for row printing
    for (int i=0;i<width;i++){
        printf("#");
    }
    printf("\n");
    return 0;
}
