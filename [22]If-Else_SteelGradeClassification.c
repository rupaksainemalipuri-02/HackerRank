#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int hardness; float carbon; int tensile;
    int h, c, t, grade;
    h=c=t=0;
    scanf("%d %f %d", &hardness, &carbon, &tensile);
    if (hardness>50) h=1;
    if (carbon<0.7) c=1;
    if (tensile>5600) t=1;
    
    if (h && c && t) grade =10;
    else if(h && c) grade=9;
    else if(c && t) grade=8;
    else if(h && t) grade=7;
    else if(h || c || t) grade=6;
    else grade=5;
    
    if (grade==10)
        printf("The grade of the steel is: %d\nAll of the conditions met.", grade);
    else if(grade>6)
        printf("The grade of the steel is: %d\nTwo conditions met.", grade);
    else if(grade==6)
        printf("The grade of the steel is: %d\nOnly one condition met.", grade);
    else
        printf("The grade of the steel is: %d\nNone of the conditions met.", grade);
    return 0;
}
