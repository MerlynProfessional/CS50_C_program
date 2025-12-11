#include <stdio.h>
#include "cs50.h"

int main(void)
{
    long dollars = 1;
    char c = get_char("Here's $%li. Double it and give to next person? ", dollars);
    if (c == 'y' || c == 'Y'){
        dollars*=2;
    }
    printf("You have %li dollars.\n", dollars);
    return 0;
}
