#include<stdio.h>
int main()
{
	float marks1;
	printf("Enter marks");
	scanf("%f",&marks1);
	if(marks1>=90) {
	printf("A+ grade");
	}
	 else if(marks1>=80){
		printf("A grade");
	}
	 else if(marks1>=70){
	 	printf("B grade");
	 }
	 else 
	 	printf(" fail");
	 
	
}
