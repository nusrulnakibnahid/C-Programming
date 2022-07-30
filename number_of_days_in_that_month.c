//Create a C programme that takes a month's number as an input and prints the number of days in that month.
#include<stdio.h>
int main(){
	
	int month;
	printf("enter the month number= ");
	scanf("%d",& month);
	
	if(month==1){    //januaray
		
	printf("number of days in that month=31\n");
	
	}
	
	else if(month==2){  //february
		
	printf("number of days in that month=28 or 29\n");
	
	}
	
	else if(month==3){   //march
		
	printf("number of days in that month=31\n");
	
	}
	
	else if(month==4){   //april
		
	printf("number of days in that month=30\n");
	
	}
	
	else if(month==5){  //may
		
	printf("number of days in that month=31\n");
	
	}
	
	else if(month==6){   //june
		
	printf("number of days in that month=30\n");
	
	}
	
	else if(month==7){   //july
		
	printf("number of days in that month=31\n");
	
	}
	
	else if(month==8){   //august
		
	printf("number of days in that month=31\n");
	
	}
	
	else if(month==9){   //september
		
	printf("number of days in that month=30\n");
	
	}
	
	else if(month==10){   //october
		
	printf("number of days in that month=31\n");
	
	}
	
	else if(month==11){   //november
		
	printf("number of days in that month=30\n");
	
	}
	
	else if(month==12){    //december
		
	printf("number of days in that month=31\n");
	
	}
	
	else{
		
	printf("Invalid Month Number");
	}
	
	
    return 0;
		
   }
