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
void getArray(int);
void displayArray(int);
int main(void) {
	int limit;
	setbuf(stdout,NULL);
	printf("enter the limit");
	scanf("%d",&limit);
	getArray(limit);
	displayArray(limit);

	return EXIT_SUCCESS;
}

void getArray(int limit){
	int i;
	printf("enter the values of array");
	for(i=0;i<limit;i++){
		scanf("%d",&limit);
	}
}
void displayArray(int limit){
	int a[100];
	int i;
	printf("entered values are");
	for(i=0;i<limit;i++){
		printf("%d\t",a[i]);
	}
}



