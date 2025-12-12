#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int age, income, risk;
    scanf("%d %d %d", &age, &income, &risk);
    
    if((age<30)||(age>=30 && income>75000 && risk==3))
        printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
    else if((age>=30 && age<=50) && ((income<=75000 && risk==2)||(income>75000 && risk<3)))
        printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
    else
        printf("Low Risk Portfolio: Suitable for conservative investments.");
    return 0;
}
