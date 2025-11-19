#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// This program reads two integers from the user, computes their sum, and prints the result.
int main() {

    int a,b;
    scanf("%d %d", &a, &b);
    if (a >= (-10000) && b <= (10000)) {
        int sum = a + b;
        printf("The sum of %d and %d is %d.\n",a,b,sum);
    }
    return 0;
}
