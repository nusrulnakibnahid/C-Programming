//create a C application to input the week number and print the weekday.
#include<stdio.h>
int main(){
	int weekday;
	printf("enter the week number= ");
	scanf("%d",&weekday);
	
	//sunday(day:1)-saturday(day:7)
	if(weekday==1){
		
	printf("weekday is sunday");
	
	}
	
	else if(weekday==2){
		
	printf("weekday is monday");
		
	}
	
	else if(weekday==3){
		
	printf("weekday is tuesday");
		
	}
	
	else if(weekday==4){
		
	printf("weekday is wednesday");
		
	}
	
	else if(weekday==5){
		
	printf("weekday is thursday");
		
	}
	
	else if(weekday==6){
		
	printf("weekday is friday");
		
	}
	
	else if(weekday==7){
		
	printf("weekday is saturday");
		
	}
	
	else{
		
	printf("invalid weekday");
	
	
	}
	
  
	
	return 0;
}
