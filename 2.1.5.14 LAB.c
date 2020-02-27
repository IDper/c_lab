#include <stdio.h>

int main()
{
	int weekNum;
	float Pi;
	printf("How many days in the week:  ");
	scanf("%d", &weekNum);
	printf("The value of Pi to two points: ");
	scanf("%f", &Pi);
	printf("There are %d days in the week. \n", weekNum);
	printf("Pi value is %.6f.", Pi);
	return 0;
}