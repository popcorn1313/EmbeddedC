/*
 * main.c
 *
 *  Created on: May 7, 2025
 *      Author: PC
 */
#include<stdio.h>

long long a = 0xfffeabcd11112345;

int main(void){
    char c = 100;
    char x = 'A';
    printf("The value of data is %d\n", c);
    printf("The address of c is %p\n", &c);

    char* p_addressOfC = &c;
    char* p_address1 =  &x;
    printf("%p %p\n",p_addressOfC, p_address1);

    *p_addressOfC = 65;
    printf("The value of c is %d\n", c);

    char *pAddress = (char*) &a;
    printf("value of Address %p is %x\n" , pAddress, *pAddress);

    pAddress = pAddress + 1;

    printf("value of Address %p is %x\n" , pAddress, *pAddress);





    return 0;
}
