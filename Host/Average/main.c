/*
 * main.c
 *
 *  Created on: Apr 25, 2025
 *      Author: PC
 */
#include<stdio.h>



int main(void){
	float num1, num2, num3;
	float average;

	printf("Enter the first number: ");
	fflush(stdout);
	scanf("%f", &num1);
	printf("\nEnter the second number: ");
	fflush(stdout);
	scanf("%f", &num2);
	printf("\nEnter the third number: ");
	fflush(stdout);
	scanf("%f", &num3);

	average = (num1 + num2 + num3) / 3;
	printf("\nAverage is %f\n", average);

	printf("Press enter to exit.\n");
	while(getchar() != '\n'){
		//spinlock 用法
	}
	getchar();
}

