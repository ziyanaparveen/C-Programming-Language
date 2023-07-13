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
	int i,n,j;
	setbuf(stdout,NULL);
	printf("enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<i;j++){
			printf("%d ",j);
		}
		printf("%d\n",i);

	}
	return EXIT_SUCCESS;
}
