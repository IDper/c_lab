#include <stdio.h>

int main()
{
	int numDay;
	printf("Text number of day:");
	scanf("%d",&numDay);
	if (numDay == 1)
	puts("The day of week is: Monday");
	if (numDay == 2)
	puts("The day of week is: Tuesday");
	if (numDay == 3)
	puts("The day of week is: Wednesday");
	if (numDay == 4)
	puts("The day of week is: Thursday");
	if (numDay == 5)
	puts("The day of week is: Friday");
	if (numDay == 6)
	puts("The day of week is: Saturday");
	if (numDay == 7)
	puts("The day of week is: Sunday");
	if (numDay > 7)
	puts("There is no such day. Input value must be from 0 to 7.");
	return 0;
}
