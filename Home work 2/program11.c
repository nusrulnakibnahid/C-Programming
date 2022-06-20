//Calculate the overall average and percentage of five subjects with a C programme.
#include<stdio.h>
int main(){
	
	int Ban,Eng,Math,Phy,Che;
	float total_marks,average,percentage;
	
	printf("Enter the marks at Ban: ");
	scanf("%d",&Ban);
	
	printf("Enter the marks at Eng: ");
	scanf("%d",&Eng);
	
	printf("Enter the marks at Math: ");
	scanf("%d",&Math);
	
	printf("Enter the marks at Phy: ");
	scanf("%d",&Phy);
	
	printf("Enter the marks at Che: ");
	scanf("%d",&Che);
	
	total_marks=Ban+Eng+Math+Phy+Che; //5 subjects marks
	average=total_marks/500; //Average=sum of the terms/numbers of terms
	percentage=total_marks/5;
	
	printf("Total Marks:%.2f\n",total_marks); 
	printf("average:%.2f\n",average);
	printf("percentage:%.2f",percentage);
	
	
	return 0;
	
	
}
