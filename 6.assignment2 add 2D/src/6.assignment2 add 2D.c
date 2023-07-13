/*
 ============================================================================
 Name        : assignment2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a1[100][100],a2[100][100];
	int size;
	int i,j;
	int sum[100][100];
	setbuf(stdout,NULL);

	printf("enter the size of array");
	scanf("%d",&size);
	printf("enter the values of array1");
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
		scanf("%d",&a1[i][j]);
	}
	}
	printf("enter the values of array2");
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
		scanf("%d",&a2[i][j]);
	}
	}
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
		sum[i][j]=a1[i][j]+a2[i][j];

	}
	}
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}






	return EXIT_SUCCESS;
}
