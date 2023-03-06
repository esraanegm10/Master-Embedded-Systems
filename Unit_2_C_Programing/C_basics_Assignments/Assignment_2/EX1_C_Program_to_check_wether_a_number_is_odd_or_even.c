/*
 ============================================================================
 Name        : EX1_C_Program_to_check_wether_a_number_is_odd_or_even.c
 Author      : esraa_negm
 Created on  : Mar 6, 2023
 Description : Unit 2 C-Programing >> C-Basic/Assignment 2 >>EX2 C Program to check whether a number is odd or even in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main()
{
	int x;
	printf("Enter an integer you want to check: ");
	fflush(stdout);fflush(stdin);
		scanf("%d",&x);
		if (x%2==0)
		{
			printf("%d is even",x);
		}
		else
		{
			printf("%d is odd",x);
		}
	return 0;
}
