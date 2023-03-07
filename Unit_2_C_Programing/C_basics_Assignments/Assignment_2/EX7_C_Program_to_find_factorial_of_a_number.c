/*
 ============================================================================
 Name        : EX7_C_Program_to_find_factorial_of_a_number.c
 Author      : esraa_negm
 Created on  : Mar 7, 2023
 Description : Unit 2 C-Programing >> C-Basic/Assignment 2 >>EX5 C Program to find factorial of a number in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>


int main()
{
	int x,i;
	unsigned long long int factorial=1;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d",&x);
	if (x>=0)
	{
	for (i=1;i<=x;++i)
		factorial*=i;

	printf("Factorial = %lu ",factorial);
	}
	else
		printf("Error Factorial of negative number does'nt exist ");
	return 0;
}
