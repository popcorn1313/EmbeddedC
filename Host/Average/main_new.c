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

	printf("Enter 3 numbers: ");
	scanf("%f %f %f", &num1, &num2, &num3);

	average = (num1 + num2 + num3) / 3;
	printf("\nAverage is %f\n", average);

	printf("Press enter to exit.\n");
	while(getchar() != '\n'){
		//spinlock 用法
	}
	getchar();
}

