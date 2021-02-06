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
                  printf("trignometric_s output is %f",trig_s(radians));
                  break;
                  
      case 2:
                  printf("Enter the degree:\n");
                  scanf("%d",&degree);
                  printf("trignometric_c output is %f",trig_c(radians));
                  break;
                  
       case 3:
                  printf("Enter the degree:\n");
                  scanf("%d",&degree);
                  printf("trignometric_t output is %f",trig_t(radians));
                  break;
                  
       default:
                  printf("NO SPECIFIED OPERATION");
                  break;
   }
 
}
float trig_s(radians)
{
                  float s_value=sin(radians);
                  printf("sine %d is %f",degree,s_value);
}
 
 float trig_c(radians)
 {
                  float c_value=cos(radians);
                  printf("cosine %d is %f",degree,c_value);
 }
float trig_t(radians)
{
                  float t_value=sin(radians);
                  printf("sine %d is %f",degree,t_value);
}
