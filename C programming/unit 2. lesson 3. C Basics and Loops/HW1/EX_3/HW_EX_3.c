/*
 ============================================================================
 Name        : HW1_EX3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int x=0 , y=0;
    printf("Enter two integers: ");
    fflush(stdin); fflush(stdout);
    scanf("%d %d",&x,&y);
    printf("Sum: %d",x+y);
	return EXIT_SUCCESS;
}
