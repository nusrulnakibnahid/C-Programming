#include<stdio.h>
int main(){
	double num1;
	double result;
	
	printf("Enter any number: ");
	scanf("%lf",&num1);
	
	result=cos(num1);
	
	printf("cos%lf =  %lf\n",num1,result);
	
	return 0;
	
	
}
