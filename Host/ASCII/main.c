/*
 * main.c
 *
 *  Created on: Apr 25, 2025
 *      Author: PC
 *
 */


#include <stdio.h>

int main(void) {
    char c1, c2, c3, c4, c5, c6;

    printf("Enter 6 characters (no spaces needed): ");
    fflush(stdout);

    // 修正 scanf 的格式，去掉多餘的空格
    scanf(" %c %c %c %c %c %c", &c1, &c2, &c3, &c4, &c5, &c6);

    // 確保正確清除換行符，避免影響 getchar()
    while (getchar() != '\n' && getchar() != EOF);

    printf("\nASCII codes are: %d %d %d %d %d %d\n", c1, c2, c3, c4, c5, c6);
    fflush(stdout);

    printf("Press Enter to exit...\n");
    getchar(); // 等待使用者按 Enter

    return 0;
}
