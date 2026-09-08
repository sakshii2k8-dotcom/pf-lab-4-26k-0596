#include<stdio.h>
int main()
{
	int number1;
	int number2;
	int number3;
	printf("Enter three numbers\n");
	scanf("%d %d %d",&number1,&number2,&number3);
	if(number1>number2 &&number1>number3)
	{
		printf("number1 is greater");
		}
		 else if (number2>number1 &&number2>number3)
		
	{printf("number2 is greater");
	}
			
			
		else {
				
				printf("number3 is greater");
			
		}
		return 0;
		
		}
	
