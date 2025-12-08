#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int checkEligibility(int age){
    if(age>=18){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
    return 0;
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int age;
    scanf("%d", &age);
    checkEligibility(age);
    return 0;
}
