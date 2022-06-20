//A C programme to calculate the area of a triangle
#include<stdio.h>
int main(){
	
	float base,height,area;
	
	printf("Enter the value of Base: ");
	scanf("%f",&base);
	
	printf("Enter the value of Height: ");
	scanf("%f",&height);
	
	area=(height*base)/2; //area of triangle formula
	
	printf("Total Area:%.2f",area);
	

	return 0;
	
}
