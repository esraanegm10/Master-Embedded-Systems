/*
 ============================================================================
 Name        : EX5_C_Program_to_Find_ASCII_Value_of_a_Character.c
 Author      : esraa_negm
 Created on  : Mar 6, 2023
 Description : Unit 2 C-Programing >> C-Basic/Assignment 1 >>EX5 C Program to Find ASCII Value of a Character in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main()
{
	char c;
	printf("Enter a character: ");
	fflush(stdout);
	scanf("%c",&c);
	printf("ASCII value of %c =%d",c,c);
	return 0;
}
