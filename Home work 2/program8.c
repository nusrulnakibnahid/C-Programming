//Write a C programme to convert temperatures from Celsius to Fahrenheit
#include<stdio.h>
int main(){
	
	float C,F; //C=celsius, F=fahrenheit
	
	printf("Enter the temperatures C: ");
	scanf("%f",&C);
	
	F = (C *9/5)+32; //celsius to fahrenheit conversion formula
	
	printf("Temperature in Fahrenheit is: %.2f",F);
	
	return 0;


}
