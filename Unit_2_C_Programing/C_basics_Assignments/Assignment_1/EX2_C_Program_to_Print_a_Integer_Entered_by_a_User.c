/*
 ============================================================================
 Name        : EX2_C_Program_to_Print_a_Integer_Entered_by_a_User.c
 Author      : esraa_negm
 Created on  : Mar 6, 2023
 Description : Unit 2 C-Programing >> C-Basic/Assignment 1 >>EX2 C Program to Print a Integer Entered by a User in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main()
{
	int a;
	printf("Enter a integer: ");
	fflush(stdout);
	scanf("%d",&a);
	printf("You entered: %d",a);
}
