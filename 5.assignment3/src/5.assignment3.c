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
	int a[100];
	int limit,i,j,temp;
	setbuf(stdout,NULL);
	printf("enter the limit");
	scanf("%d",&limit);
	printf("enter your array values");
	for(i=0;i<limit;i++){
		scanf("%d",&a[i]);
	}
	printf("sorted array is:");
	for(i=0;i<limit-1;i++){
	for(j=i+1;j<limit;j++){
		if(a[i]<a[j]){
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
}
	for(i=0;i<limit;i++){
	printf("%d\t",a[i]);
	}
	return EXIT_SUCCESS;
}
