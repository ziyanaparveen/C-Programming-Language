/*
 ============================================================================
 Name        : sum.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b,sum;
	setbuf(stdout,NULL);
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	sum=a+b;
	printf("sum of two numbers %d",sum);
	return EXIT_SUCCESS;
}
