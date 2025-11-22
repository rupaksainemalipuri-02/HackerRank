#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int charDist(int m, int n){
    int res;
    if (m>n){
        res = m - n;
    }
    else{
        res = n - m;
    }
    return res;
}
int main() {
    char char1, char2;
    scanf("%c %c", &char1, &char2);
    printf("The distance between %c and %c is %d",char1, char2, charDist(char1, char2));
    return 0;
}
