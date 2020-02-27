#include <stdio.h>

int main()
{
    float valueA;
    float valueB;
	printf("Value A: ");
	scanf("%f", &valueA);
	printf("Value B: ");
	scanf("%f", &valueB);
	printf("%.6f + %.6f = %.6f. \n", valueA, valueB, valueA + valueB);
	printf("%.6f - %.6f = %.6f. \n", valueA, valueB, valueA - valueB);
	printf("%.6f * %.6f = %.6f. \n", valueA, valueB, valueA * valueB);
	
	return 0;
}