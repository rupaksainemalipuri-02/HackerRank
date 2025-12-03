#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void split(int n){
    int ones,tens,hundreds;
    ones = n%10;
    n = n/10;
    tens = n%10;
    hundreds = n/10;
    printf("%d %d %d", hundreds, tens, ones);
}
int main() {
    int num;
    scanf("%d", &num);
    split(num);
    return 0;
}
