//Create a C programme that takes the radius of a circle and calculates the diameter, circumference, and area of the circle
#include<stdio.h>
int main(){
    float radius,diameter,circumference,area;
    
    printf("Enter the value of r(radius): ");
    scanf("%f",&radius);
   
    diameter=2*radius;
    circumference=2*3.14*radius;
    area=3.14*(radius*radius);
    
	printf("diameter of circle is: %.3f\n",diameter);
	printf("circumference of circle is: %.3f\n",circumference);
	printf("area of circle is: %.3f\n",area);

	return 0;	
}
