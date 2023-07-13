/*
 ============================================================================
 Name        : assignment3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int p;
	float r,n,SI;
	setbuf(stdout,NULL);
	printf("enter three numbers");
	scanf("%d%f%f",&p,&r,&n);
	SI=(p*r*n)/100;
	printf("result  is:%f",SI);

	return EXIT_SUCCESS;
}
