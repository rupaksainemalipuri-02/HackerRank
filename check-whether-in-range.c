/*
Take inputs {n}{low}{high}
Output must be a "YES" or "NO" depending on whether the number lies between the range given or not.

INPUT : 2 5 6
OUTPUT : YES

INPUT : 5 10 29
OUTPUT : NO
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int rangeCheck(int n, int low, int high){
    if (n>=low && n<=high){
        printf("In Range");
    }
    else{
        printf("Out of Range");
    }
    return 0;
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n, low, high;
    scanf("%d %d %d", &n, &low, &high);
    rangeCheck(n, low, high);
    return 0;
}
