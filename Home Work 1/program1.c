///calculate With user input + - * / %

#include<stdio.h>
int main ()
{
	int x,y,addition,substraction,multiply,division,divisible;
	
	printf("Enter the value of x: ");
	scanf("%d",&x);
	
	printf("Enter the value of y: ");
	scanf("%d",&y);
	
	
	addition=x+y;
    substraction=x-y;
    multiply=x*y;
    division=x/y;
    divisible=x%y;
    
    printf("Addition=%d\n",addition);
    printf("substraction=%d\n",substraction);
    printf("multiply=%d\n",multiply);
    printf("division=%d\n",division);
    printf("divisible=%d\n",divisible);
    
    return 0;
    
	
	
}
