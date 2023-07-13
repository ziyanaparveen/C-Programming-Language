/*
 ============================================================================
 Name        : assignment1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float mark;
	setbuf(stdout,NULL);
	printf("enter your mark");
	scanf("%f",&mark);
	if(mark<50)
	{
		printf("you are failed");
	}
	else if(mark<=100)
	{
		printf("you are passed");
	}
	else
	{
		printf("maimum score you can achieve is 100");
	}
	return EXIT_SUCCESS;
}
