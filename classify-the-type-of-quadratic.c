#include <stdio.h>
#include <math.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    float D = pow(b, 2) - (4.0*a*c);
    if (D>=0){
        float x1, x2;
        x1 = (-b + sqrt(D))/(float)(2*a);
        x2 = (-b - sqrt(D))/(float)(2*a);
        if (D>0) printf("Roots: %.2f, %.2f\nType: Real and Distinct", x1, x2);
        else printf("Roots: %.2f, %.2f\nType: Real and Equal", x1, x2);
    }
    else {
        float xR, xI; 
        if (a>0){
            xR = -b/(float)(2*a);
            xI = sqrt(-D)/(float)(2*a);
        }
        else{
            xR = -b/(float)(2*a);
            xI = sqrt(-D)/(float)(2*(-(a)));
        }
        if (xI<0)
            xI=-(xI);
        printf("Roots: %.2f + %.2fi, %.2f - %.2fi\nType: Complex", xR, xI, xR, xI);
    }
    
    return 0;
}
