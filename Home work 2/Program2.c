//Create a C application that allows you to enter two integers and calculate their total
#include<stdio.h>
int main(){
	int num1,num2,sum;
	printf("Enter the value of num1 :");
	scanf("%d",&num1);
	printf("Enter the value of num2 :");
	scanf("%d",&num2);
	
	
	//enter sum value
	sum=num1+num2;
	printf("Sum=%d\n",sum);
	
	
	return 0;
	
	
}
