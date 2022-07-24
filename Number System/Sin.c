#include<stdio.h>
int main(){
	double num1;
	double result;
	
	printf("Enter any number: ");
	scanf("%lf",&num1);
	
	result=sin(num1);
	
	printf("sin%lf =  %lf\n",num1,result);
	
	return 0;
	
	
}
