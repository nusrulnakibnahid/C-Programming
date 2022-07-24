#include<stdio.h>
int main(){
	double num1;
	double result;
	
	printf("Enter any number: ");
	scanf("%lf",&num1);
	
	result=tan(num1);
	
	printf("tan(%lf) =  %lf\n",num1,result);
	
	return 0;
	
	
}
