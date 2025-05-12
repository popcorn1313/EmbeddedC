/*
 * main.c
 *
 *  Created on: May 9, 2025
 *      Author: PC
 */
#include<stdio.h>
#include<stdint.h>

void wait(void);

int main(void){

	int32_t num,output;
	printf("Please enter the number\n");
	scanf("%d", &num);
	if(num & 1){
		printf("Input number is odd\n");
	}else{
		printf("Input number is even\n");
	}
	output = num | 0x90;
	printf("[input][output]:0x%x 0x%x\n",num,output);
	output = num & 0x90;
	printf("[input][output]:0x%x 0x%x\n",num,output);
	output = num^0x90;
	printf("[input][output]:0x%x 0x%x\n",num,output);




	wait();



	return 0;
}
void wait(void){
	while(getchar()!= '\n');
	printf("Press enter to exit application");
	getchar();
}
