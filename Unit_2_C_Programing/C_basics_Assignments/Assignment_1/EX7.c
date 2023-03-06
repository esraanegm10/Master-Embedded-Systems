/*
 ============================================================================
 Name        : EX7_Source_Code_to_Swap_Two_Numbers_without_temp_variable.c
 Author      : esraa_negm
 Created on  : Mar 6, 2023
 Description : Unit 2 C-Programing >> C-Basic/Assignment 1 >>EX7 Write Source Code to Swap Two Numbers without temp variable in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main()
{
	int a,b;
		printf("Enter value of a:");
		fflush(stdout);
		scanf("%d",&a);
		printf("Enter value of b:");
		fflush(stdout);
		scanf("%d",&b);
		// swap code without temp variable
		a=a+b;
		b=a-b;
		a=a-b;
		printf("After swapping, value of a = %d",a);
		printf("\nAfter swapping, value of b = %d",b);


	return 0;
}
