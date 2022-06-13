/////calculate + - * / % operator in one program with/without user input
#include<stdio.h>
int main (){
	double x,y,addition,substraction,multiply,division,modulus;
	

printf("enter two number=");
scanf("%lf %lf",&x,&y);

addition=x+y;
printf("This is add=%lf\n",addition);

substraction=x-y;
printf("This is sub=%lf\n",substraction);

multiply=x*y;
printf("This is mul=%lf\n",multiply);


division=x/y;
printf("This is div=%lf\n",division);

modulus=x/y;
printf("This is mod=%lf\n",modulus);



return 0;
	
	
}
