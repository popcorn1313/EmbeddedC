/*
 * main.c
 *
 *  Created on: May 14, 2025
 *      Author: PC
 */


#include<stdio.h>

void wait(void);

int main(void){

	int height;
    printf("Enter height of pyramid:");
    scanf("%d", &height);

    for(int i =1;i<=height;i++){
    	for(int j=i;j>=1;j--){
    		printf("%d\t",j);
    	}
    	printf("\n");
    }
	wait();
	return 0;
}


void wait(void){
	while(getchar() != '\n');
	printf("Press enter to exit");
	getchar();
}
