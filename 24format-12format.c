#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int changeFormat(int hrs, int min){
    if(hrs==0){
        hrs=12;
        printf("%d:%02d AM", hrs, min);
    }
    else if(hrs>=1 && hrs<12){
        printf("%d:%02d AM", hrs, min);
    }
    else if(hrs==12){
        printf("%d:%02d PM", hrs, min);
    }
    else{
        hrs-=12;
        printf("%d:%02d PM", hrs, min);
    }
    return 0;
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int h,m;
    scanf("%d %d", &h, &m);
    changeFormat(h,m);
    return 0;
}
