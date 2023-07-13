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
	int n,i,limit=10,result;
	setbuf(stdout,NULL);
	printf("enter a number");
	scanf("%d",&n);
	for(i=1;i<=limit;i++){
		result=i*n;
		printf("%d*%d=%d\n",i,n,result);


	}

	return EXIT_SUCCESS;
}
