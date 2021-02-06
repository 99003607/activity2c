#include<stdio.h>
#include<math.h>
#include<trignometry.h>

void trignometry()
{
int degree=0;
int operation;
printf("Enter 1 for sin\n Enter 2 for cos\n Enter 3 for tan\n");
scanf("%d",&operation);
float radians = degree*(3.14/180.0);
scanf("%f",&radians);

 switch(operation)
 {

      case 1:
                  printf("Enter the degree:\n");
                  scanf("%d",&degree);
                  float sin_value=sin(radians);
                  printf("sine %d is %f",degree,sin_value);
                  break;
                  
      case 2:
                  printf("Enter the degree:\n");
                  scanf("%d",&degree);
                  float cos_value=cos(radians);
                  printf("cosine %d is %f",degree,cos_value);
                  break;
                  
       case 3:
                  printf("Enter the degree:\n");
                  scanf("%d",&degree);
                  float tan_value=sin(radians);
                  printf("Tangent %d is %f",degree,tan_value);
                  break;
                  
       default:
                  printf("NO SPECIFIED OPERATION");
                  break;
   }
}
