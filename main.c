/*
	@baxsm - Straight Line Depreciation Method in C
*/

#include <stdio.h>
#include <stdlib.h>

double sldm(double cost, double salvage, int lifetime)
{
	return (cost - salvage) / lifetime;
}

int main()
{
	double cost, salvage, depVal;
	int lifetime;
	int i;
	
	printf("Enter the original cost of the asset: ");
	scanf("%d", &cost);
	
	printf("Enter the salvage value of the asset: ");
	scanf("%d", &salvage);
	
	printf("Enter the lifetime in year of the asset: ");
	scanf("%d", &lifetime);
	
	depVal = sldm(cost, salvage, lifetime);
	printf("The straight line depreciation of the asset is : %d\n", depVal, " pounds per year!\n");
	
	for(i = 1; i < lifetime + 1; i++){
		printf("The value of the asset after year %d", i);
		printf(" is: %d \n", cost - (i * depVal));
	}
	
	printf("@baxsm");

	return 0;
}
