#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// This program reads a lowercase letter from the user and converts it to uppercase by subtracting 32 from its ASCII value.
int main() {

    char lower;
    scanf("%c",&lower);
    char upper = lower - 32 ;
    printf("The uppercase of %c is %c\n",lower,upper);
    return 0;
}
