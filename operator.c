#include <stdio.h>
#include "cs50.h"

int main(void)
{
    int x= get_int("Enter first integer: ");
    int y= get_int("Enter second integer: ");

    if (x>y){
        printf("x is greater than y\n");}
    else if (x<y){
        printf("x is less than y\n");}
    else{
        printf("x is equal to y\n");}
}
