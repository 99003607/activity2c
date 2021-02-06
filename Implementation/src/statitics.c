
#include <stdio.h>
#include<statitics.h>
#include <math.h>

 
void statitics()
{
    int i,n,d ;
    float x[10];
    float s,a, v, sd, sum = 0, sum1 = 0;
 
    printf("Enter the value of N \n");
    scanf("%d", &n);
    printf("Enter %d real numbers \n", n);


    for (i = 0; i < n; i++)
    {
        scanf("%f", &x[i]);
    }
    
printf("Select the option below \n 1) Show all\n 2) Mean\n 3) Sum\n 4) Standard deviation\n 5) Variance\n");
scanf("%d",&d);



    if (d==1)
    {

    for (i = 0; i < n; i++)
    {
        sum = sum + x[i];
    }
    a= sum / (float)n;
    
    for (i = 0; i < n; i++)
    {
        sum1 = sum1 + pow ( (x[i] - a), 2);
    }
    v= sum1 / (float)n;
    sd = sqrt (v);
    printf("Average/Mean = %.4f\n", a);
    printf("Variance = %.4f\n", v);
    printf("Standard deviation = %.4f\n", sd);
    }
    
    else if (d==2)
    {




    for (i = 0; i < n; i++)
    {
        sum = sum + x[i];
    }
    a= sum / (float)n;
    
    for (i = 0; i < n; i++)
    {
        sum1 = sum1 + pow ( (x[i] - a), 2);
    }
    v= sum1 / (float)n;
    sd = sqrt (v);
    printf("Average/Mean = %.4f\n",a);
    
    }
    

else if (d==3)
{
    for (i = 0; i < n; i++)
    {
        sum = sum + x[i];
    }
    a= sum / (float)n;
    
    for (i = 0; i < n; i++)
    {
        sum1 = sum1 + pow ( (x[i] - a), 2);
    }
    v= sum1 / (float)n;
    sd = sqrt (v);
    printf("Sum = %.4f\n",sum);
}

else if (d==4)
{
    for (i = 0; i < n; i++)
    {
        sum = sum + x[i];
    }
    a= sum / (float)n;
    
    for (i = 0; i < n; i++)
    {
        sum1 = sum1 + pow ( (x[i] - a), 2);
    }
    v= sum1 / (float)n;
    sd = sqrt (v);
    printf("Standard deviation= %.4f\n",sd);
}
else if (d==5)

{
    for (i = 0; i < n; i++)
    {
        sum = sum + x[i];
    }
    a= sum / (float)n;
    
    for (i = 0; i < n; i++)
    {
        sum1 = sum1 + pow ( (x[i] - a), 2);
    }
    v= sum1 / (float)n;
    sd = sqrt (v);
    printf("Vairance= %.4f\n",v);
}
else {
printf("Select the options from above functions only \n");
}
return 0;
}
