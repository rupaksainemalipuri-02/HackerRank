/*
Sample Input
============
3 12345678912345 a 334.23 14049.30493

Sample Output
=============
3
12345678912345
a
334.230
14049.304930000*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i;
    long int l;
    char ch;
    float f;
    double d;
    scanf("%d %ld %c %f %lf", &i, &l, &ch, &f, &d);
    printf("%d\n%ld\n%c\n%.3f\n%.9lf", i, l, ch, f, d);
    return 0;
}
