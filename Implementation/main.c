#include<stdio.h>
#include<stdlib.h>
#include<unitconver.h>
#include<exponential.h>
#include<Determinant.h>
#include<baseconversion.h>
#include<calculator_operations.h>
#include<exponential.h>
#include<logicalfunctions.h>
#include<reverse.h>
#include<trignometry.h>
int main()
{
	int choice;
	printf("--------------Welcome to the calculator------------");
	printf("\n---Calculator Menu---\n");
	first:printf("/nList of operations\n 1)Basic arthmetic calculations   2)Boolean operations  3)Trignometry  \n 4)Base conversion  5)Exponential  6)Qudratic \n 7)Unit convertions  8)Reverse conversion  9)Statistical conversion  /n 10)EXIT");
	printf("\nEnter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: ADD
		printf("\n\t %d + %d = %d\n Enter to continue", 
            a1, 
            a2,
            add(a1, a2));
            
            __fpurge(stdin);
            getchar();
			break;
		case 2 : SUBTRACT
		printf("\n\t %d - %d = %d\n Enter to continue", 
            b1, 
            b2,
            subtract(b1, b2));
            
            __fpurge(stdin);
            getchar();
		case 3 : MULTIPLY
		printf("\n\t %d * %d = %d\n Enter to continue", 
            C1, 
            C2,
            multiply(C1, C2));
            
            __fpurge(stdin);
            getchar();
		case 4 : DIVIDE
		printf("\n\t %d / %d = %d\n Enter to continue", 
            d1, 
            d2,
            divide(d1, d2));
            
            __fpurge(stdin);
            getchar();
		case 5: boolean();
			break;
		case 6: trignometry();
			break;
		case 7: baseconversion();
			break;
		case 8: exponential();
			break;
		case 9: quadratic();
			break;
		case 10: unitconvertion();
			break;
		case 11: reverseconversion();
			break;
		case 12: statitics();
			break;
		case 13: exit(); 
			
		default: printf("INVALID CHOICE!!!!!!\nPlease renter your choice");
			goto first;
	}
	goto first;
	return(0);
}
