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
	int i,limit,sum=0;
	setbuf(stdout,NULL);
	printf("enter the limit");
	scanf("%d",&limit);
	for(i=1;i<=limit;i++){
		if(i%2==0){
			continue;
		}
		else{
			sum=sum+i;
		}


	}
	printf("%d",sum);
	return EXIT_SUCCESS;
}
