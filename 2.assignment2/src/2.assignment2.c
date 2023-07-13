/*
 ============================================================================
 Name        : assignment2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1;
	setbuf(stdout,NULL);
	float num2,sum;
	printf("enter two  numbers");
	scanf("%d%f",&num1,&num2);
	sum=num1+num2;
	printf("sum is:%f",sum);
	return EXIT_SUCCESS;
}
