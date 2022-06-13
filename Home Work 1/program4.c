///includes 4 or 5 variable to calculate + - * / with/without user input

#include<stdio.h>
float main (){
	int num1=10,num2=20,num3=30,num4=40,num5=50,addition,substraction,multiply,division;
	
	
	addition=num1+num2+num3+num4+num5;
    substraction=num1-num2-num3-num4-num5;
    multiply=num1*num2*num3*num4*num5;
    division=num1/num2/num3/num4/num5;
    
    printf("Addition=%f\n",addition);
    printf("substraction=%f\n",substraction);
    printf("multiply=%f\n",multiply);
    printf("division=%f\n",division);
    
    return 0;
    
	
}
