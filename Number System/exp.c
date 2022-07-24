//write a C programming number convert to exponent
#include<stdio.h>
#include<math.h>
int main(){
	double num1;
	double result;
	
	printf("Enter any number: ");
	scanf("%lf",&num1);
	
	result=exp(num1);
	
	printf("exp(%lf) =  %lf\n",num1,result);
	
	return 0;
	
	
}
