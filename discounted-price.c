#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
float discounted(float price, float percent){
    float discountAmount = ( price * percent ) / 100;
    float discountedPrice = price - discountAmount;
    printf("The final price is: %f", discountedPrice);
    return discountedPrice;
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    float price, percent;
    scanf("%f %f", &price, &percent);
    discounted(price, percent);
    return 0;
}
