/*
 ============================================================================
 Name        : switch.c
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
	printf("1.porotta\n 2.biriyani\n 3.friedrice\n 4.mandhi\n enter your choice");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:
		printf("you have entered porotta");
		break;

	case 2:
		printf("you have entered biriyani");
		break;
	case 3:
		printf("you have entered friedrice");
		break;
	case 4:
		printf("you have entered mandhi");
		break;
	default:
		printf("fool");


	}
	return EXIT_SUCCESS;
}
