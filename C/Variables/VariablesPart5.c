#include <stdio.h>

int main()
{
	int daysInCurrentFebruary 	= 29;
	int daysInJanuary  		= 31;
	int daysInFebruary = daysInCurrentFebruary;
	int daysInMarch 			= 31;
	int daysInApril 			= 30;
	int daysInMay 			= 31;
	int daysInJune 			= 30;
	int daysInJuly 			= 31;
	int daysInAugust 			= 31;
	int daysInSeptember 		= 30;
	int daysInOctober 		= 31;
	int daysInNovember 		= 30;
	int daysInDecember 		= 31;
	int q1 = daysInJanuary + daysInFebruary + daysInMarch;
	int q2 = daysInApril + daysInMay + daysInJune;
	int q3 = daysInJuly + daysInAugust + daysInSeptember;
	int q4 = daysInOctober + daysInNovember + daysInDecember;

	printf("Days in Q1 of the current year:: %d\n", q1);
	printf("Days in Q2 of the current year:: %d\n", q2);
	printf("Days in Q3 of the current year:: %d\n", q3);
	printf("Days in Q4 of the current year:: %d\n", q4);
	return 0;
}
