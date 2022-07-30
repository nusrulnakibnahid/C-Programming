#include<stdio.h>
int main(){
	int num1,num2;
	printf("Enter any number=");
	scanf("%d %d",&num1,&num2);
	
	if(num1>num2){
		
	printf("number1 is greater\n");
		
	}
	
	else if(num2>num1){
		
	printf("number2 is greater");
		
	}
	
	else  if(num1==num2){
		
		
	printf("number1,number2 is equal");
	
	}
	
	else{
	printf("invalid number");
	}
	
	return 0;
}
