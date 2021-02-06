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
		case 1: basicoperations();
		 break;
		case 2: boolean();
			break;
		case 3: trignometry();
			break;
		case 4: baseconversion();
			break;
		case 5: exponential();
			break;
		case 6: quadratic();
			break;
		case 7: unitconvertion();
			break;
		case 8: reverseconversion();
			break;
		case 9: statitics();
			break;
		case 10: exit(0); 
			
		default: printf("INVALID CHOICE!!!!!!\nPlease renter your choice");
			goto first;
	}
	goto first;
	return(0);
}
