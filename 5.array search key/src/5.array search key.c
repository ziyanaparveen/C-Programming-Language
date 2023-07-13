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
	int a[100],searchkey,flag=0;
	int limit,i;
	setbuf(stdout,NULL);
	printf("enter your limit");
	scanf("%d",&limit);
	printf("enter your values");
	for(i=0;i<limit;i++){
		scanf("%d",&a[i]);
	}
	printf("enter your search key");
	scanf("%d",&searchkey);
	for(i=0;i<limit;i++){
		if(searchkey==a[i]){
			flag=1;
			break;
		}
	}
	if(flag==1){
		printf("item found at:%d",i+1);
	}
	else{
		printf("value not found");
	}

	return EXIT_SUCCESS;
}
