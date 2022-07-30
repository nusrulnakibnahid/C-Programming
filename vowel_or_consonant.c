//create a C programmeto determine if an input alphabet has a vowel or a consonant.
#include<stdio.h>
int main(){
	char cha;
	printf("enter any character=");
	scanf("%c",&cha);
	
	if((cha=='a') || (cha=='e') || (cha=='i') || (cha=='o') || (cha=='u')){
	printf("alphabet is vowel");
		
	}
	
	else if((cha=='A') || (cha=='E') || (cha=='I') || (cha=='O') || (cha=='U')){
		
	printf("alphabet is vowel");
		
	}
	
	else{
		
	printf("alphabet is consonant");
		
	}
	return 0;
}
