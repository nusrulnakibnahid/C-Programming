//Write a C programme to determine the area of a rectangle given its length and width
#include<stdio.h>
int main(){
	
	float num1,num2,length,width,area;
	
	printf("Enter the value of length num1: ");
	scanf("%f",&num1);
	
	printf("Enter the value of width num2: ");
	scanf("%f",&num2);
	
	
	area=num2*num1; //area formula
	
	
	printf("Area of rectangle is: %.2f\n",area);
	
	return 0;
	
	
}
