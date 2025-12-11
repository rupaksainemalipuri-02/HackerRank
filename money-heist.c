#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n0, n1, n2, n3, n4, n5, n6, n7, n8, n9, i1, i2, i3, c1, c2, c3;
    scanf("%d %d %d %d %d %d %d %d %d %d", &n0, &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9);
    scanf("%d %d", &i1, &c1);
    scanf("%d %d", &i2, &c2);
    scanf("%d %d", &i3, &c3);
    
    //First Correction
    if (i1 == 0) (n0 += c1, ((n>9)?(n0%=9, n0-=1):n0%=9);
    else if(i1 == 1) (n1 += c1, n1%=9);
    else if(i1 == 2) (n2 += c1, n2%=9);
    else if(i1 == 3) (n3 += c1, n3%=9);
    else if(i1 == 4) (n4 += c1, n4%=9);
    else if(i1 == 5) (n5 += c1, n5%=9);
    else if(i1 == 6) (n6 += c1, n6%=9);
    else if(i1 == 7) (n7 += c1, n7%=9);
    else if(i1 == 8) (n8 += c1, n8%=9);
    else if(i1 == 9) (n9 += c1, n9%=9);
    
    //Second Correction
    if (i2 == 0) (n0 += c2, n0%=9);
    else if(i2 == 1) (n1 += c2, n1%=9);
    else if(i2 == 2) (n2 += c2, n2%=9);
    else if(i2 == 3) (n3 += c2, n3%=9);
    else if(i2 == 4) (n4 += c2, n4%=9);
    else if(i2 == 5) (n5 += c2, n5%=9);
    else if(i2 == 6) (n6 += c2, n6%=9);
    else if(i2 == 7) (n7 += c2, n7%=9);
    else if(i2 == 8) (n8 += c2, n8%=9);
    else if(i2 == 9) (n9 += c2, n9%=9);
    
    //Third Correction
    if (i3 == 0) (n0 += c3, n0%=9);
    else if(i3 == 1) (n1 += c3, n1%=9);
    else if(i3 == 2) (n2 += c3, n2%=9);
    else if(i3 == 3) (n3 += c3, n3%=9);
    else if(i3 == 4) (n4 += c3, n4%=9);
    else if(i3 == 5) (n5 += c3, n5%=9);
    else if(i3 == 6) (n6 += c3, n6%=9);
    else if(i3 == 7) (n7 += c3, n7%=9);
    else if(i3 == 8) (n8 += c3, n8%=9);
    else if(i3 == 9) (n9 += c3, n9%=9);
    
    printf("%d %d %d %d %d %d %d %d %d %d", n0, n1, n2, n3, n4, n5, n6, n7, n8, n9);
    
    return 0; 
}
