/*
 * main.c
 *
 *  Created on: May 12, 2025
 *      Author: PC
 */
#include<stdio.h>
#include<stdint.h>

void wait(void);

int main(void){
	//start 可以兼具 num 的作用，可讓程式更為簡潔
	int start, end, num;
	int count = 0;
	printf("Please enter start and end number(with space)\n");
	scanf("%d %d", &start, &end);
	if(end < start){
		printf("Error");
		wait();
	}
	if(start & 1){
		num = start + 1;
	}else{
		num = start + 2;
	}
	while(num <= end){
		printf("%d\n", num);
		num += 2;
		count++;
	}
	printf("There are %d even numbers\n", count);
	wait();

	return 0;
}


void wait(void){
	while(getchar() != '\n');
	printf("Press enter to exit");
	getchar();
}
