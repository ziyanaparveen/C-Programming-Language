/*
 ============================================================================
 Name        : array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[100];
	int limit,i;
	setbuf(stdout,NULL);
	printf("enter the limit");
	scanf("%d",&limit);
	printf("enter your values");
	for(i=0;i<=limit;i++)
	{
		scanf("%d",&a[i]);
	}
	  printf("entered values are:\n");
	  for(i=0;i<=limit;i++)
	  {
		  printf("%d\t",a[i]);
	  }
	return EXIT_SUCCESS;
}
