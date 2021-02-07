#include<stdio.h>
#include<math.h>
#include<trignometry.h>

	
	 
float trig_s(float degree)  
{  
	float PI = 3.14159; 
	float radian,result;  
	radian = degree * (PI / 180.0);  
	result=sin(radian);
	printf("Sin(%f) = %f\n", degree, result);  
	return (result);
}
	  
float trig_c(float degree)  
{  
	float PI = 3.14159;
    float radian,result;  
	radian = degree * (PI / 180.0);  
	result=cos(radian); 
	printf("Cos(%f) = %f\n", degree, result); 
	return (result);
}
	  
float trig_t(float degree)  
{   
	float PI = 3.14159;
      float radian,result;  
	radian = degree * (PI / 180.0);  
	result=cos(radian); 
	printf("Tan(%f) = %f\n", degree, result); 
	return (result);
}
void trignometry()
{       
        int operation;
	    float angle=0;
	    printf("Enter the required operation:\n 1. for sin \n 2. for cos \n 3. for tan");
	    scanf("%d",&operation);
	   printf("Enter angle in degree\n");  
	   scanf("%f",&angle);
	    
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
