#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int a, b;
    scanf("%d %d", &a, &b);
    if (((a-b)>>31)&1) printf("%d", a);
    else printf("%d", b);
    return 0;
}
