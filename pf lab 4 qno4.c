#include<stdio.h>
int main()
{
	int year1;
	printf("Leap year");
	scanf("%d",&year1);
	if(year1%4==0 && year1%100!=0) {
		printf("Leap year");}
		else{
		printf("NOT leap year");
	}
}
