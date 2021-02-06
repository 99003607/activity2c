#include <Determinant.h>
#include<stdio.h>
#include<math.h>

void quadratic()
{
float x,y,z,Determinant,root1,root2,real,img;
printf("\n Enter the value of coefficient x, y and z: \n ");
scanf("%f %f %f", &x, &y, &z);
//Determinant to find the nature of the roots
Determinant = y * y - 4 * x * z;
//Defining the condition for real and equal roots
if(Determinant=0)
 {  
        root1 = root2 = -y / (2 * x); // both roots are equal;  
        printf("\n Value of root1 = %.2f and Value of root2 = %.2f", root1, root2);  
 }  
//Defining the condition for complex and different roots
else if(Determinant<0) 
    {
        real = -y / (2 * x);  
        img = sqrt(-det) / (2 * x);  
        printf("\n value of root1 = %.2f + %.2fi and value of root2 = %.2f - %.2fi ", real, img, real, img);  
    }  
//Defining the codition for real and different roots
else{
    root1 = (-y + sqrt(det)) / (2 * x);  
    root2 = (-y + sqrt(det)) / (2 * x);  
    printf("\n Value of root1 = %.2f and value of root2 = %.2f", root1, root2); 

    }    
}