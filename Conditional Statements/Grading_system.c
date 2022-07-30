include<stdio.h>
int main(){
	int num;
	printf("Enter any number=");
	scanf("%d",&num);
	
	if(num>=80){
	
	printf("A+");
	
	}
	
    else if(num>=70){
    	
    printf("A");	
	}
	
	else if(num>=60){
    	
    printf("A-");	
	}
	
	else if(num>=50){
    	
    printf("B");	
	}
	
	else if(num>=49){
    	
    printf("C");
	}
	
	else if(num>=40){
    	
    printf("D");	
	}
	
	else{
	printf("this student is fail");	
	}

	return 0;
}
