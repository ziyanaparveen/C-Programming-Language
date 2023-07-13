/*
 ============================================================================
 Name        : assignment.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int choice;
	setbuf(stdout,NULL);
	printf("enter your choice");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:
		printf("sunday");
		break;
	case 2:
		printf("monday");
		break;
	case 3:
		printf("tuesday");
		break;
	case 4:
		printf("wednesday");
		break;
	case 5:
		printf("thursday");
		break;
	case 6:
		printf("friday");
		break;
	case 7:
		printf("saturday");
		break;
	default:
		printf("invalid");
	}
	return EXIT_SUCCESS;
}
