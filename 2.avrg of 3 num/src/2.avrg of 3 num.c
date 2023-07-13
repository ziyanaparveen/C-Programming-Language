/*
 ============================================================================
 Name        : avrg.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float num1,num2,num3,avrg;
	setbuf(stdout,NULL);
	printf("enter three numbers");
	scanf("%f%f%f",&num1,&num2,&num3);
	avrg = (num1+num2+num3)/3;
	printf("result is:%f",avrg);
	return EXIT_SUCCESS;
}
