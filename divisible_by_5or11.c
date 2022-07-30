//Write a C programme to determine if an integer is divisible by 5 and 11 or not.
#include<stdio.h>
int main(){
	
	int num;
	printf("Enter any number=");
	scanf("%d",&num);
	
	if((num%5==0) && (num%11==0)){
	
	
	
	printf("Number is divisible");
	
	
	}
	
	else{
		
	printf("Number is not divisible");
	
	}
	
	
	
	return 0;

}
