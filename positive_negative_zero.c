//create a C programme to determine if a number is negative, positive, or zero.
#include<stdio.h>
int main(){
	int num;
	printf("Enter the number= ");
	scanf("%d",&num);
	
	if(num>0){
		
	printf("Number is positive");
		
	}
	
	else if(num<0){
		
	printf("Number is negative");
		
	}
	
	else{
		
	printf("Numaber is Zero");	
	}
	
	
	return 0;
}
