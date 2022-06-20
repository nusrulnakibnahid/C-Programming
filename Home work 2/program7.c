//Create a C programme that accepts centimetres as input and converts them to metres and kilometres
#include<stdio.h>
int main(){
	float cent,meter,km;
	
	printf("Enter the value of cent: ");
	scanf("%f",&cent);
	

	meter=cent*100; //1meter=100 centimetres
	km=cent*100000; //1km=100000 centimetres
	
	printf("Total meter is: %.2f\n", meter);
	printf("Total km is: %.2f", km);
	
	return 0;
	
}
