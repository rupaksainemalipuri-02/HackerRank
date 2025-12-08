#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int largest;
    if (a>b){
        largest = a;
    }
    else{
        largest = b;
    }
    if(largest<c){
        largest = c;
    }
    printf("The largest number is : %d", largest);
    return 0;
}
