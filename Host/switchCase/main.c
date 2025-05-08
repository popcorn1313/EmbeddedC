/*
 * main.c
 *
 *  Created on: May 8, 2025
 *      Author: PC
 */

#include<stdio.h>

void wait(void);

int main(void){

	char type;
	float area;
	printf("Please enter the type of figures\n 't' for triangle\n 'z' for trapezoid\n"
			"'c' for circle\n 's' for square\n 'r' for rectangle \n");
	scanf("%c", &type);

	switch(type){
	case 't':
		int a,b;
		printf("Please enter the base\n");
		scanf("%d",&a);
		printf("Please enter the height\n");
		scanf("%d", &b);
		area = a*b/2;
		printf("Area is %f", area);
		break;
	case 'z':
		int c,d,e;
		printf("Please enter ");


	}






	return 0;
}



void wait(void){
	while(getchar() != '\n');
	printf("Press enter to leave the application");
	getchar();
}
