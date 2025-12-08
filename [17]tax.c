#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    float tax = 0.0;
    int amt;
    scanf("%d", &amt);
    if(amt>=0 && amt<10000000){
        if (amt >= 1000000){
            tax = 12500 + 100000 + (amt-1000000)*(30.0/100);
        }
        else if(amt >= 500000){
            tax = 12500 + (amt-500000)*(20.0/100);
        }
        else if(amt >= 250000){
            tax = (amt-250000)*(5.0/100);
        }
        printf("%.2f", tax);
    }
    else{
        printf("INVALID");
    }
    return 0;
}
