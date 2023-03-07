/*
 ============================================================================
 Name        : EX3_C_Program_to_find_largest_number_among_three_numbers.c
 Author      : esraa_negm
 Created on  : Mar 6, 2023
 Description : Unit 2 C-Programing >> C-Basic/Assignment 2 >>EX3 C Program to find largest number among three numbers in C, Ansi-styl
 ============================================================================
 */

#include <stdio.h>

int main()
{
	float a,b,c;
	printf("Enter three numbers: ");
	fflush(stdout);
	scanf("%f %f %f",&a,&b,&c);
	if(a>b)
	{
		if (a>c)
			printf("Largest number= %.2f",a);
		else
			printf("Largest number= %.2f",c);
	}
	else if (b>c)
		printf("Largest number = %.2f",b);
	else
		printf("Largest number = %.2f",c);


	return 0;
}
