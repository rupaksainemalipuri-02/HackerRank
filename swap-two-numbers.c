#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int a, b;
    scanf("%d\n%d", &a, &b);
    {
        int temp;
        temp=a;
        a=b;
        b=temp;
    }
    printf("%d\n%d", a, b);
    return 0;
}
