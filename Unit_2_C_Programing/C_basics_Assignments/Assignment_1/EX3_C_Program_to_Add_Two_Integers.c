/*
 ============================================================================
 Name        : EX3_C_Program_to_Add_Two_Integers.c
 Author      : esraa_negm
created on   : Mar 6,2023
 Description : Unit 2 C-Programing >> C-Basic/Assignment 1 >> EX3 C Program to Add Two Integers in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main()
{
	int a,b;
	printf("Enter two integers: ");
	fflush(stdout);
	scanf("%d %d",&a,&b);
	printf("sum %d",a+b);

	return 0;
}
