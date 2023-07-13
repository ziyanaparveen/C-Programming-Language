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
	int i,j,n;
	setbuf(stdout,NULL);
	printf("enter a number");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(j=n;j>i;j--)
		{
			printf("*");
		}
		    printf("\n");
	}
	return EXIT_SUCCESS;
}
