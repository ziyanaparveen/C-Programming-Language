/*
 ============================================================================
 Name        : aassignment2.c
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
	int limit,i,count=0;
	setbuf(stdout,NULL);
	printf("enter the limit");
	scanf("%d",&limit);
	printf("enter the values of array");
	for(i=0;i<limit;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<limit;i++){

	    if(a[i]%2==0){
	    	count=++count;
	    }
	}
	printf("number of even numbers in the given array is:%d",count);

	return EXIT_SUCCESS;
}
