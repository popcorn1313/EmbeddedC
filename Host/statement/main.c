/*
 * main.c
 *
 *  Created on: May 8, 2025
 *      Author: PC
 */
#include<stdio.h>


int main(void){

	int age;
	printf("Please enter your age:");
	scanf("%d", &age);

	if(age < 18){
		printf("You cannot vote.\n");
	}else{
		printf("You can vote.\n");
	}
	while( getchar() != '\n' );//just read input buffer and do nothing
	printf("Press enter to leave.");//單雙引號有差別記得注意

	getchar();


	return 0;
}

