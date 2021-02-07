#include<stdio.h>
#include<math.h>
#include<trignometry.h>

	float degree, radian;  
	const float PI = 3.14159;  
int trig_s(int angle)  
{  
    printf("Enter angle in degree\n");  
	scanf("%f",&degree);
	radian = degree * (PI / 180.0);  
	printf("Sin(%f) = %f\n", degree, sin(radian));  
	return 0;
}
	  
int trig_c(int angle)  
{  
    printf("Enter angle in degree\n");  
	scanf("%f",&degree);
	radian = degree * (PI / 180.0);  
	printf("Cos(%f) = %f\n", degree, cos(radian)); 
	return 0;
}
	  
int trig_t(int angle)  
{   
    printf("Enter angle in degree\n");  
	scanf("%f",&degree);
	radian = degree * (PI / 180.0);  
	printf("Tan(%f) = %f\n", degree, tan(radian)); 
	return 0;
}
void trignometry()
{       
        int operation;
	    float angle=0;
	    printf("Enter the required operation:\n 1. for sin \n 2. for cos \n 3. for tan");
	    scanf("%d",&operation);
	    
	    switch(operation){
	        case 1: 
	                 trig_s(angle);
	                 break;
	        case 2:
	                 trig_c(angle);
	                 break;
	        case 3:
	                 trig_t(angle);
	                 break;
	        default:
	                 printf("--NO OPERATION--");
	    }   
    
}