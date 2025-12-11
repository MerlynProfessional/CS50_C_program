#include <stdio.h>
#include "cs50.h"

int get_positive_int(void);
void print_meow(int n);

int main(void){
    int n=get_positive_int();
    print_meow(n);
}

int get_positive_int(void){
    int n;
    do {
        n=get_int("please insert a number : ");
    }while (n <= 1);
    return n;
}

void print_meow(int n){
    for (int i=0;i<n;i++){
        printf("meow\n");
    }
}
