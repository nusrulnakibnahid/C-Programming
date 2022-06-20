//Create a C programme that takes the length and width of a rectangle and calculates the perimeter
#include<stdio.h>
int main(){
	
	float length,width,area,perimeter;
	
	printf("Enter the value of length: ");
	scanf("%f",&length);
	
	printf("Enter the value of width: ");
	scanf("%f",&width);
	
	
	area=width*length; //area formula
	perimeter=2*(width+length);//perimeter formula
	
	printf("Area of rectangle is: %.3f\n",area);
	printf("perimeter of rectangle is: %.3f",perimeter);
	
	return 0;
	
	
}
