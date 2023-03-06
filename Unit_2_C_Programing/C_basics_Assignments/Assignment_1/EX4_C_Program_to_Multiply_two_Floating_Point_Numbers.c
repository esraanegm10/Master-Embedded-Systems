/*
 ============================================================================
 Name        : EX4_C_Program_to_Multiply_two_Floating_Point_Numbers.c
 Author      : esraa_negm
 Created on  : Mar 6, 2023
 Description : Unit 2 C-Programing >> C-Basic/Assignment 1 >>EX4 C Program to Multiply two Floating Point Numbers in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main()
{
	float x,y;
	printf("Enter two numbers : ");
	fflush(stdout);
	scanf("%f %f",&x,&y);
	printf("Product: %f",x*y);
	return 0;
}
