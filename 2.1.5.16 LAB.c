#include <stdio.h>

int main()
{ 
    int daysInMonth;
    int monthsInYear;
    printf("How days of the mouth? ");
    scanf("%d", &daysInMonth);
    printf("How months of the year? ");
    scanf("%d", &monthsInYear);
    printf("The day of the year: %d",daysInMonth * monthsInYear);
    
	return 0;
}