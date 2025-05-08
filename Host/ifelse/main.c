/*
 * main.c
 *
 *  Created on: May 8, 2025
 *      Author: PC
 */
#include<stdio.h>
#include<stdint.h>

void waitFor(void);

int main(void){

	float num1, num2;
	printf("Please enter the first number:\n");
	if(scanf("%f", &num1) == 0){
		printf("Invalid input\n");
		waitFor();
		return 0;
	}

	printf("Please enter the second number:\n");
	if(scanf("%f", &num2) == 0){
		printf("Invalid input\n");
		waitFor();
		return 0;
	}
	int n1 = num1;
	int n2 = num2;

	if((n1 != num1) || (n2 != num2)){
		printf("Warning! comparing only integer part\n");
	}

	if(n1 == n2){
		printf("They are equal.\n");
	}else{
		if(n1 > n2){
			printf("%d is bigger\n", n1);
		}
		else{
			printf("%d is bigger\n", n2);
		}
	}


	waitFor();



	return 0;
}


void waitFor(void){
	while(getchar()!='\n');

	printf("Press enter to leave the application.");
	getchar();
}
