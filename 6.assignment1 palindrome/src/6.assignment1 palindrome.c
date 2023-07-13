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
	char string[100];
	int len,i,flag=0;
	setbuf(stdout,NULL);
	printf("enter the string");
	scanf("%s",string);
	len=strlen(string);
	for(i=0;i<len;i++){
		if(string[i] != string[len-i-1]){
			flag=1;
			break;
		}

	}
	if(flag==0){
		printf("%s is a palindrome",string);
	}
	else{
		printf("%s not a palindrome",string);
	}


	return EXIT_SUCCESS;
}
