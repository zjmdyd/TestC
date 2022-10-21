//
//  scanf_gets.c
//  TestC
//
//  Created by issuser on 2022/10/17.
//

#include "scanf_gets.h"
#include <string.h>

void test_scanf(void) {
    int a, b, c;
    printf("请输入3个数字:");
    scanf("%d%d%d", &a, &b, &c); // 用空格、tab键、回车键分隔
    printf("%d, %d, %d\n", a, b, c);
    
    // 用','分隔
    scanf("%d, %d, %d", &a, &b, &c);
    printf("%d, %d, %d\n", a, b, c);
}

void test_gets(void) {
    char src[100] = {0};
    printf("请输入一个字符串:");
    gets(src);
    printf("您输入的字符串为:");
    for (int i = 0; i < strlen(src); i++) {
        printf("%c", src[i]);
    }
    printf("\n");
}
