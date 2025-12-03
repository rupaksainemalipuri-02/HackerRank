//TRY WITHOUT USING MODULO OPERATOR

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int lastDigit(int num1, int num2){
    int rem1 = num1;
    int rem2 = num2;
    rem1 = (rem1/=10, rem1*=10, num1-rem1);
    rem2 = (rem2/=10, rem2*=10, num2-rem2);
    if(rem1==rem2){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    lastDigit(num1, num2);
    return 0;
}
