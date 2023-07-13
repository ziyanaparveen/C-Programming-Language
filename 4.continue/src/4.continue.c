/*
 ============================================================================
 Name        : continue.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i;
	setbuf(stdout,NULL);
	for(i=0;i<10;i++)
	{
		printf("haii\n");
		if(i==5)
		{
			printf("hello\n");
			continue;
		}
		    printf("finished\n");

	}
	return EXIT_SUCCESS;
}
