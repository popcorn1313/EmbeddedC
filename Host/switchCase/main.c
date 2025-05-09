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
	int a,b,c;
	printf("Please enter the type of figures\n 't' for triangle\n 'z' for trapezoid\n"
			"'c' for circle\n 's' for square\n 'r' for rectangle \n"
			"You have to enter the integer !");
	scanf("%c", &type);

	switch(type){
	case 't':
		printf("Please enter the base\n");
		scanf("%d",&a);
		printf("Please enter the height\n");
		scanf("%d", &b);
		area = a*b/2;
		printf("Area is %0.2f\n", area);
		wait();

		break;
	case 'z':
		printf("Please enter the upper base\n");
		scanf("%d", &a);
		printf("Please enter the lower base\n");
		scanf("%d", &b);
		printf("Please enter the height\n");
		scanf("%d", &c);
		area = (a + b)*c/2;
		printf("Area is %0.2f\n", area);
		wait();

		break;
	case 'c':
		printf("Please enter the radius\n");
		scanf("%d", &a);
		area = a*a*3.14;
		printf("Area is %0.2f\n", area);
		wait();

		break;
	case 's':
		printf("Please enter the length\n");
		area = a*a;
		printf("Area is %0.2f\n", area);
		wait();
		break;
	case 'r':
		printf("Please enter the length\n");
		scanf("%d", &a);
		printf("Please enter the width\n");
		scanf("%d", &b);
		area = a * b;
		printf("Area is %0.2f\n", area);
		wait();
		break;
	default:
		printf("Invlid input\n");
		area = -1;
	}




	return 0;
}



void wait(void){
	while(getchar() != '\n');
	printf("Press enter to leave the application");
	getchar();
}
