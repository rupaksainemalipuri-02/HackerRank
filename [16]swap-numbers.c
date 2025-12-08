#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int a, b, c;
    scanf("%d %d", &a, &b);
    c = b;
    b = a;
    a = c;
    printf("a = %d\nb = %d", a, b);
    return 0;
}
