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
	int limit,i,sum=0;
	setbuf(stdout,NULL);
	printf("enter your limit");
	scanf("%d",&limit);
	printf("enter your values");
	for(i=0;i<limit;i++){
		scanf("%d",&a[i]);
}
	for(i=0;i<limit;i++){
		sum=sum+a[i];
}
	printf("result is:%d\t",sum);
	return EXIT_SUCCESS;
}
