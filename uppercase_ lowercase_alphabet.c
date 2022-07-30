//create a C programmeto determine if a letter is an uppercase or lowercase alphabet.
#include<stdio.h>
int main(){
	char cha;
	printf("enter any alphabet=");
	scanf("%c",&cha);
	
	if((cha>='A') && (cha<='Z')){
		
	printf("alphabet is uppercase");
	
	}
	
	else {
		
	printf("alphabet is lowercase");
	
	}
	
	
	return 0;
}
