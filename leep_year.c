//create a C programme to determine if a year is a leap year or not.
#include<stdio.h>
int main(){
	int year;
	printf("enter any year=");
	scanf("%d",&year);
	
	if((year%4==0 && (year%100!==0)) || (year%400==0)){
		
	printf("This is leep year");
	
	}
	
	else{
		
	printf("This is not leep year");
	}
	
	
	return 0;
}
