/*
 ============================================================================
 Name        : EX5_C_Program_to_check_whether_a_character_is_an_alphabet_or_not.c
 Author      : esraa_negm
 Created on  : Mar 7, 2023
 Description : Unit 2 C-Programing >> C-Basic/Assignment 2 >>EX5 C Program to check whether a character is an alphabet or not in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>


int main()
{
	char c;
	printf("Enter a character: ");
	fflush(stdout);
	scanf("%c",&c);
	if((c>='a'&&c<='z')||(c>='A'&&c<='z'))
		printf("%c is an alphabet",c);
	else
		printf("%c is not an alphabet",c);

	return 0;
}
