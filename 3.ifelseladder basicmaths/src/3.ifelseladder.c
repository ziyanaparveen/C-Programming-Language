/*
 ============================================================================
 Name        : ifelseladder.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1,num2,choice,result;
	setbuf(stdout,NULL);
	printf("enter two numbers");
	scanf("%d%d",&num1,&num2);
	printf("1.Addition \n 2.substraction \n 3.multiplication \n 4.division \n enter a choice");
	scanf("%d",&choice);
	if(choice==1)
	{
		result=num1+num2;
		printf("result=%d",result);
	}
	else if(choice==2)
	{
		result=num1-num2;
		printf("result=%d",result);
	}
	else if(choice==3)
	{
		result=num1*num2;
		printf("result=%d",result);
	}
	else if(choice==4)
	{
		result=num1/num2;
		printf("result=%d",result);
		
	}
	else
	{
		printf("you are a fool");
	}
	
	return EXIT_SUCCESS;
}
