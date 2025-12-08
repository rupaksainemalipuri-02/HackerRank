#include <stdio.h>

int possTriangle(int len1, int len2, int len3){
    int type=0;
    if ((len1+len2)>len3 && (len2+len3)>len1 && (len3+len1)>len2){
        if (len1==len2 && len2==len3)
            type=1;
        else if(len1==len2 || len2==len3 || len3==len1)
            type=2;
        else
            type=3;
    }
    
    printf("Lengths: [%d, %d, %d]\nType: ", len1, len2, len3);
    switch(type){
        case 1: printf("Equilateral\nAll sides are of the same length."); break;
        case 2: printf("Isosceles\nExactly two sides are equal."); break;
        case 3: printf("Scalene\nAll sides are of different lengths."); break;
        default: printf("Invalid\nCannot form a valid shape."); break;
    }
    return 0;
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int len1, len2, len3;
    scanf("%d %d %d", &len1, &len2, &len3);
    possTriangle(len1, len2, len3);
    return 0;
}
