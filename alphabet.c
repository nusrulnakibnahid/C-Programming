//Create a C programme to determine whether or not a character is an alphabet.
#include<stdio.h>
int main(){
	char cha;
	printf("enter any character=");
	scanf("%c",&cha);
	
	if((cha>='a') && (cha<='z') || (cha>='A') && (cha<='Z')){
		
	printf("This is alphabet");
	
	
	}
	
   else{
   	
    printf("this is not alphabet");
   	
   }	
	return 0;
	
}
