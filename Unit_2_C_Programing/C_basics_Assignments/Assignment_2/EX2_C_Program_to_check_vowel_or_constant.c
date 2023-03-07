/*
 ============================================================================
 Name        : EX2_C_Program_to_check_vowel_or_constant.c
 Author      : esraa_negm
 Created on  : Mar 6, 2023
 Description : Unit 2 C-Programing >> C-Basic/Assignment 2 >>EX2 C Program to vowel or constant in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char c;
	printf("Enter an alphapet: ");
	fflush(stdout);
	scanf("%c",&c);
	(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')?printf("%c is "
			"a vowel",c):printf("%c is a constant",c);

	return 0;
}
