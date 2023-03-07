/*
 ============================================================================
 Name        : EX6_C_Program_to_calculate_sum_of_natural_numbers.c
 Author      : esraa_negm
 Created on  : Mar 7, 2023
 Description : Unit 2 C-Programing >> C-Basic/Assignment 2 >>EX5 C Program to calculate sum of natural numbers in C, Ansi-styl
 ============================================================================
 */

#include <stdio.h>

int main()
{
	int x,i,sum=0;
	printf("Enter an integer :");
	fflush(stdout);
	scanf("%d",&x);
	for (i=0;i<=x;i++)
		{sum+=i;
		}printf("Sum = %d",sum);
	return 0;
}
