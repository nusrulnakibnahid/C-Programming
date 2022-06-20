//Create a C application that allows you to enter two integers and do all arithmetic operations on them
#include<stdio.h>
int main(){
	
	int num1,num2,sum,sub,mul,div;
	
	printf("Enter the value of num1 :");
	scanf("%d",&num1);
	printf("Ente the value of num2: ");
	scanf("%d",&num2);
	
	sum=num1+num2;
	sub=num1-num2;
	mul=num1*num2;
	div=num1/num2;
	
	printf("sum=%d\n",sum);
	printf("sub=%d\n",sub);
	printf("mul=%d\n",mul);
	printf("div=%d\n",div);
	
	
	
	return 0;
	
	
	
}
