#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char a;
    scanf("%c", &a);
    char b=a-32;
    printf("The uppercase of %c is %c", a, b);
    return 0;
}
