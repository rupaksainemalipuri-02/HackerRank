#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d", &n);
    if((n-(n>>2)*4)==0) printf("Yes");
    else printf("No");
    return 0;
}
