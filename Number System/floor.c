#include<stdio.h>
#include<math.h>
int main(){
	double num1;
	double result;
	
	printf("Enter any number: ");
	scanf("%lf",&num1);
	
	result=floor(num1);
	
	printf("floor(%lf) =  %lf\n",num1,result);
	
	return 0;
	
	
}
