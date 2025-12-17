#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int budget, numGuests, foodCost, decorCost, musicCost, extra;
    scanf("%d %d %d %d %d %d", &budget, &numGuests, &foodCost, &decorCost, &musicCost, &extra);
    int total = numGuests*foodCost + decorCost + musicCost + extra;
    if (numGuests>5 && numGuests<=50
        && total<=budget
        && (decorCost<budget*0.3 || (numGuests*foodCost)<budget*0.5)
        && (numGuests<=25 || musicCost>0))
        printf("Celebration Approved");
    else printf("Celebration Denied");
    return 0;
}
