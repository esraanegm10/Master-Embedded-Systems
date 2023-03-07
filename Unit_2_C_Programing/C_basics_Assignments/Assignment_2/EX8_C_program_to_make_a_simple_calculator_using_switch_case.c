/*
 ============================================================================
 Name        : EX8_C_program_to_make_a_simple_calculator_using_switch_case.c
 Author      : esraa_negm
 Created on  : Mar 7, 2023
 Description : Unit 2 C-Programing >> C-Basic/Assignment 2 >>EX5 C Program to make a simple calculator using switch...case in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main()
{
	char operator;
	float num1,num2;
	printf("Enter operator either + or - or * or divide : ");
	fflush(stdout);
	scanf("%c",&operator);
	printf("Enter two operands: ");
	fflush(stdout);
	scanf("%f %f",&num1,&num2);
	switch(operator)
	{
	case '+':
	{
		printf("%.1f %c %.1f = %.1f",num1,operator,num2,num1+num2);
	}
	break;
	case '-':
	{
		printf("%.1f %c %.1f = %.1f",num1,operator,num2,num1-num2);
	}
	break;
	case '*':
	{
		printf("%.1f %c %.1f = %.1f",num1,operator,num2,num1*num2);
	}
	break;
	case 'divide':
	{
		printf("%.1f %c %.1f = %.1f",num1,operator,num2,num1/num2);
	}
	break;
	default:
		printf("Error! operator is not correct");
	}

	return 0;
}
