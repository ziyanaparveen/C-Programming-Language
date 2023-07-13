/*
 ============================================================================
 Name        : if.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b;
	setbuf(stdout,NULL);
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	if(a<b)
	{
		printf("greatestnumberis:%d",b);
	}else
	{
		printf("greatest number is:%d",a);
	}
	return EXIT_SUCCESS;
}
