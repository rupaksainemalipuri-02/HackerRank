#include <stdio.h>

int main()
{
    int day, month, year, oddMonth=0, leap=0;
    scanf("%d %d %d", &day, &month, &year);
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
        oddMonth = 1;
    }
    if ((year%4==0 && year%100!=0) || year%400==0){
        leap = 1;
    }
    
    if(!leap){
        if (month==12){
            (day<31) ? day++ : (day=1, month=1, year++);
        }
        else if(month==2){
            (day<28) ? day++ : (day=1, month++);
        }
        else{
            (oddMonth) ? ((day<31) ? day++ : (day=1, month++)) : ((day<30) ? day++ : (day=1, month++));
        }
    }
    else{
        if (month==12){
            (day<31) ? day++ : (day=1, month=1, year++);
        }
        else if(month==2){
            (day<29) ? day++ : (day=1, month++);
        }
        else{
            (oddMonth) ? ((day<31) ? day++ : (day=1, month++)) : ((day<30) ? day++ : (day=1, month++));
        }
    }
    
    printf("%02d-%02d-%04d", day, month, year);
    
    return 0;
}
