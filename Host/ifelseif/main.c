/*
 * main.c
 *
 *  Created on: May 8, 2025
 *      Author: PC
 */

#include<stdio.h>

void wait(void);

int main(void){

	double num;
	double tax;
	printf("Please enter your income.\n");
	if(scanf("%lf", &num) == 0){
		printf("invlaid input");
		wait();
	}
	if(num < 0 ){
		printf("Invalid input");
		wait();
	}
	int income = num;
	if(income <= 9525){
		tax = income*0;
	}else if(income <= 38700){
		tax  = income*0.12;
	}else if(income <= 82500){
		tax = income * 0.22;
	}else{
		tax = income*0.33;
		tax += 1000;
	}
	printf("You have to pay $%0.2lf\n", tax);
	wait();
	return 0;
}


void wait(void){
	while(getchar() != '\n');
	printf("Press enter to exit application");

	getchar();

}
