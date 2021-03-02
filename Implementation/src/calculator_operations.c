#include <calculator_operations.h>


void basicoperations()
{
    int calculator_operand1 = 0,calculator_operand2 = 0;
    int choice1;
    printf("\n---basic operations---\n");
	printf("\nBasic operations: \n 1)add 2)subtract  3)multiply 4)divide \n");
	printf("Enter your choice:");
	scanf("%d",&choice1);
	switch(choice1)
    {
         case 1:
            printf("\n\t%d + %d = %d\nEnter to continue", 
            calculator_operand1,
            calculator_operand2,
            add(calculator_operand1, calculator_operand2));
            getchar();
            break;
         case 2:
            printf("\n\t%d - %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            subtract(calculator_operand1, calculator_operand2));
            getchar();
            break;
        case 3:
            printf("\n\t%d * %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            multiply(calculator_operand1, calculator_operand2));
            getchar();
            break;
        case 4:
            printf("\n\t%d / %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            divide(calculator_operand1, calculator_operand2));
            getchar();
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("\n\t---It should never come here---\n");
    }
}
int add(int calculator_operand1, int calculator_operand2)
{
    return(calculator_operand1+calculator_operand2);
}
int subtract(int calculator_operand1,int calculator_operand2)
{
    return(calculator_operand1-calculator_operand2);
}
int multiply(int calculator_operand1, int calculator_operand2)
{
    return(calculator_operand1*calculator_operand2);
}
int divide(int calculator_operand1, int calculator_operand2)
{
    return(calculator_operand1/calculator_operand2);
}
