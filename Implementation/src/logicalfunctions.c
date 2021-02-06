#include <logicalfunctions.h>
#include <math.h>
int and(int operand1, int operand2){
  return (operand1 & operand2);
    
}

int or(int operand1, int operand2){
    return (operand1 | operand2);
  
}

int not(int operand1){
   return (~operand1);
   
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
void boolean()
{
    int choice;
    printf("1)OR 2)AND 3)NOT 4)NAND 5)XOR 6)XNOR 7)NOR");
    printf("enter your choice");
    scanf("%d",&choice);
    switch(choice)
    {
          case 2:
            printf("\n\t%d AND %d = %d\nEnter to continue", calculator_operand1, calculator_operand2, and(calculator_operand1, calculator_operand2));
        
            __fpurge(stdin);
            getchar();
            break;

          case 1:
            printf("\n\t%d OR %d = %d\nEnter to continue", calculator_operand1, calculator_operand2, or(calculator_operand1, calculator_operand2));
        
            __fpurge(stdin);
            getchar();
            break;
        
          case 3:
            printf("\n\tNOT %d = %d\nEnter to continue", calculator_operand1, not(calculator_operand1));
        
            __fpurge(stdin);
            getchar();
            break;

          case 4:
            printf("\n\t%d NAND %d = %d\nEnter to continue", calculator_operand1, calculator_operand2, nand(calculator_operand1, calculator_operand2));
        
            __fpurge(stdin);
            getchar();
            break;
          
          case 7:
            printf("\n\t%d NOR %d = %d\nEnter to continue", calculator_operand1, calculator_operand2, nor(calculator_operand1, calculator_operand2));
        
            __fpurge(stdin);
            getchar();
            break;

          case 5:
            printf("\n\t%d XOR %d = %d\nEnter to continue", calculator_operand1, calculator_operand2, xor(calculator_operand1, calculator_operand2));
        
            __fpurge(stdin);
            getchar();
            break;

          case 6:
            printf("\n\t%d XNOR %d = %d\nEnter to continue", calculator_operand1, calculator_operand2, xnor(calculator_operand1, calculator_operand2));
        
            __fpurge(stdin);
            getchar();
            break;

          case 29:
            exit(0);
            break;
          default:
            printf("\n\t---It should never come here---\n");
    }
}

