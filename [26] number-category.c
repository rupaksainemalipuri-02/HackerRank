#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int N;
    scanf("%d", &N);
    if (!(N%2) && !(N%3) && (N%5)) printf("A");
    else if (N>20 && (N==2*3 || N==2*5 || N==2*7 || N==2*11 || N==3*5 || N==3*7 || N==3*11 || N==5*7 || N==5*11 || N==7*11))
        printf("B");
    else if((N%3==0 || N%7==0) && !(N%3==0 && N%7==0) && N>9 && N<100)
        printf("C");
    else if(N==1 || N==4 || N==9 || N==16 || N==25 || N==36 || N==49 || N==64 || N==81 || N==100 || N==121 || N==144 || N==169 || N==196)
        printf("D");
    else
        printf("E");
    return 0;
}
