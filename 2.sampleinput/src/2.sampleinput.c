/*
 ============================================================================
 Name        : sampleinput.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num;
	setbuf(stdout,NULL);
	printf("enter a number");
	scanf("%d",&num);
	printf("you have entered %d",num);
	return EXIT_SUCCESS;
}
