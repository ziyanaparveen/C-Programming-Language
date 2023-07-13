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
	int a1[100],a2[100];
    int i,j,temp;
    int limit;
	setbuf(stdout,NULL);
	printf("enter your limit");
	scanf("%d",&limit);
	printf("enter the values of array1");
	for(i=0;i<limit;i++){
		scanf("%d",&a1[i]);
	}


	printf("enter the values of array2");
	for(i=0;i<limit;i++){
		scanf("%d",&a2[i]);
	}
	for(i=0;i<limit-1;i++){
		for(j=i+1;j<limit;j++){
			if(a1[i]>a1[j]){
				temp=a1[i];
				a1[i]=a1[j];
				a1[j]=temp;
			}
		}
	}

	for(i=0;i<limit-1;i++){
		for(j=i+1;j<limit;j++){
			if(a2[i]>a2[j]){
			temp=a2[i];
			a2[i]=a2[j];
			a2[j]=temp;

		}
	}
	}
	printf("sorted values of array1: ");
	for(i=0;i<limit;i++){
		printf("%d\t",a2[i]);
	}
	printf("sorted values of array2: ");
	for(i=0;i<limit;i++){
		printf("%d\t",a1[i]);
	}





	return EXIT_SUCCESS;
}
