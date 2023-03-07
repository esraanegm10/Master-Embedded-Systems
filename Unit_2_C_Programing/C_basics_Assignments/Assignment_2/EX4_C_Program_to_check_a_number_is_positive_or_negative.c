/*
 ============================================================================
 Name        : EX4_C_Program_to_check_a_number_is_positive_or_negative.c
 Author      : esraa_negm
 Created on  : Mar 6, 2023
 Description : Unit 2 C-Programing >> C-Basic/Assignment 2 >>EX4 C Program to check a number is positive or negative in C, Ansi-styl
 ============================================================================
 */

#include <stdio.h>

int main()
{
	float x;
	printf("Enter a number : ");
	fflush(stdout);
	scanf("%f",&x);
	if (x>0)
		printf("\n%.2f is positive",x);
	else if (x<0)
		printf("\n%.2f is negative",x);
	else
		printf("\nYou entered zero.");
	return 0;
}
