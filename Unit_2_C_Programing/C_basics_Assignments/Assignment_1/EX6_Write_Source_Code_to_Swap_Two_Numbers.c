/*
 ============================================================================
 Name        : EX6_Write_Source_Code_to_Swap_Two_Numbers.c
  Author      : esraa_negm
 Created on  : Mar 6, 2023
 Description : Unit 2 C-Programing >> C-Basic/Assignment 1 >>EX6 Write Source Code to Swap Two Numbers in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main()
{
	float a,b,temp;
	printf("Enter value of a:");
	fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b:");
	fflush(stdout);
	scanf("%f",&b);
	temp=a;
	a=b;
	b=temp;
	printf("After swapping, value of a = %.2f",a);
	printf("\nAfter swapping, value of b = %.2f",b);


	return 0;
}
