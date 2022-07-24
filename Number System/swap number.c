#include<stdio.h>
int main(){
	int num1=10;
	int num2=20;
	
	
	num1=num1-num2;
	num2=num1+num2;
	num1=num2-num1;
	
	//swap two number without temporary variable
	
	printf("num1=%d\n",num1);
	printf("num2=%d",num2);
	
	
	return 0;
	
}
