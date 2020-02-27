#include <stdio.h>

int main()
{
	int day;
	int month;
	int year;
	int result;
	
	int jan = 31;
	int feb = 28;
	int mar = 31;
	int apr = 30;
	int may = 31;
	int jun = 30;
	int jul = 31;
	int aug = 31;
	int sep = 30;
	int oct = 31;
	int nov = 30;
	int dec = 31;
    
		if (year % 400 == 0)
			puts("Leap");
		else if (year % 100 == 0)
			puts("Not leap");
		else if (year % 4 == 0)
			puts("Leap");
    
	printf("Day:");
	scanf("%d",&day);
	printf("Month:");
	scanf("%d",&month);
	printf("Year:");
	scanf("%d",&year);
	if (month == 1)
	result = day;
	if (month == 2)
	result = day + jan;
	if (month == 3)
	result = day + jan + feb;
	if (month == 4)
	result = day + jan + feb + mar;
	if (month == 5)
	result = day + jan + feb + mar + apr;
	if (month == 6)
	result = day + jan + feb + mar + apr + may;
	if (month == 7)
	result = day + jan + feb + mar + apr + may + jun;
	if (month == 8)
	result = day + jan + feb + mar + apr + may + jun + jul;
	if (month == 9)
	result = day + jan + feb + mar + apr + may + jun + jul +aug;
	if (month == 10)
	result = day + jan + feb + mar + apr + may + jun + jul + aug + sep;
	if (month == 11)
	result = day + jan + feb + mar + apr + may + jun + jul + aug + sep + oct;
	if (month == 12)
	result = day + jan + feb + mar + apr + may + jun + jul + aug + sep + oct + nov;
	if (month > 12)
	puts("No correct data");
	
	printf("The day of the year: %d", result);
	
	
	return 0;
}
