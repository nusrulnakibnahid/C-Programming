//Convert days to years, weeks, and days with a C programme
#include<stdio.h>
int main(){
	
	float days,weeks,year;
	
	printf("Enter total days: ");
	scanf("%f",&days);
	
	weeks=days/7; //1week=7days
	year=days/365; //1year=365days
	
	printf("Total weeks: %.2f\n", weeks);
	printf("Total years: %.2f", year);
	
	
	return 0;
	
}
