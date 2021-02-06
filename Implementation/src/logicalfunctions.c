#include<stdio.h>
#include <logicalfunctions.h>
#include<stdlib.h>
#include <math.h>
void boolean()
{
    int choice,operand1,operand2;
    printf("these are the logical functions that i support\n");
    printf("enter your choice 1)OR\n 2)AND\n 3)NAND \n 4)NOR \n 5)XOR\n 6)XNOR \n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("enter the operands\n");
            scanf("%d,%d",&operand1,&operand2);
            printf("the output of ORing is %d",or(operand1,operand2));
            break;
        case 2:
            printf("enter the operands\n");
            scanf("%d,%d",&operand1,&operand2);
            printf("the output of ORing is %d",and(operand1,operand2));
            break;
        case 3:
            printf("enter the operands\n");
            scanf("%d,%d",&operand1,&operand2);
            printf("the output of ORing is %d",nand(operand1,operand2));
            break;
        case 4:
            printf("enter the operands\n");
            scanf("%d,%d",&operand1,&operand2);
            printf("the output of ORing is %d",nor(operand1,operand2));
            break;
        case 5:
            printf("enter the operands\n");
            scanf("%d,%d",&operand1,&operand2);
            printf("the output of ORing is %d",xor(operand1,operand2));
            break;
        case 6:
            printf("enter the operands\n");
            scanf("%d,%d",&operand1,&operand2);
            printf("the output of ORing is %d",xnor(operand1,operand2));
            break;
        
        
    }
}
int or(int operand1, int operand2)
{
    return (operand1 | operand2);
  
}
int and(int operand1, int operand2)
{
  return (operand1 & operand2);
    
}
int nand(int operand1, int operand2){
   return ~(operand1 & operand2);
    
}
int nor(int operand1, int operand2){
return ~(operand1 | operand2);
    
}
int xor(int operand1, int operand2){
    return (operand1 ^ operand2);
  
}
int xnor(int operand1, int operand2){
   return ~(operand1 ^ operand2);
   
}