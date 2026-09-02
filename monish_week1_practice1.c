/*
@file
Program to get the value of integer and float variables,
display their values and print their sizes
Author: Monish Kanna K
Date: 05.01.2026
File Name: monish_week1_practice1.c4
*/
#include <stdio.h>
int main() {
    int a;
    float b;
    printf("Enter integer value: ");
    scanf("%d", &a);
    printf("Enter float value: ");
    scanf("%f", &b);
    printf("\nInteger value: %d", a);
    printf("\nFloat value: %.2f", b);
    printf("\nSize of integer: %lu bytes", sizeof(a));
    printf("\nSize of float: %lu bytes", sizeof(b));
    return 0;
}
