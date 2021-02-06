#include<stdio.h>
#include<math.h>
#include<trignometry.h>

void trignometry()
{
	    float angle=0,trignometry;
	    printf("enter the number");
	    scanf("%f",&angle);
	    trig(angle);
	    /*printf("enter 1 for continuation else 2");
	    int k;
	    scanf("%d",&k);
	    if(k=1){
	        return 0;
	    }
	    else{
	        return 0;
	
	    }*/
}   
int trig(int angle)  
{  
	float degree, radian;  
	const float PI = 3.14159;  
	  
	printf("Enter angle in degree\n");  
	scanf("%f",&degree);  
	  
	radian = degree * (PI / 180.0);  
	  
	    printf("Sin(%f) = %f\n", degree, sin(radian));  
	    printf("Cos(%f) = %f\n", degree, cos(radian));  
	    printf("Tan(%f) = %f\n", degree, tan(radian)); 
	    return 0;
}
