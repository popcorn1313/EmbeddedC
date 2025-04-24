/*
 * math.c
 *
 *  Created on: Apr 21, 2025
 *      Author: PC
 */


int add(int x, int y);
int sub(int x, int y);
long long mul(int x, int y);
float divv(int x, int y);

int add(int x, int y){
	return x + y;
}

int sub(int x, int y){
	return x - y;
}
long long mul(int x, int y){
	return (long long int)x * y;
}

float divv(int x, int y){
	return x / y;
}
