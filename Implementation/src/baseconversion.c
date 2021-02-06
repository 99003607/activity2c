#include<stdio.h>
#include<baseconversion.h>
 void baseconversion()
{
    int a,i,k;
    int num;
    int bin[32],oct[100000];
    char hex[10000];
    int dec;
   
    
    printf("select the conversions \n DEC TO bin = 1 \n DEC TO OCT = 2 \n DEC TO HEX = 3 \n  \n>>");
    back:scanf("%d",&a);
    switch(a)
    {
        case 1:
        printf("enter decimal number\n>>");
        scanf("%d",&num);
        for(i=0;num>0;i++)
        {
            bin[i]=num%2;
            num=num/2;
        }
        printf("binary of given number is\n>>");
        for(i=i-1;i>=0;i--)
        {
            printf("%d",bin[i]);
        }
        printf("\n\n");
        break;

        case 2:
        printf("enter decimal number\n>>");
        scanf("%d",&num);
        for(i=0;num>0;i++)
        {
            oct[i]=num%8;
            num=num/8;
        }
        printf("ocatal number of given number is\n>>");
        for(i=i-1;i>=0;i--)
        {
            printf("%d",oct[i]);
        }
        printf("\n\n");
        break;

        case 3:
        printf("enter decimal number\n>>");
        scanf("%d",&num);
        for(i=0;num>0;i++)
        {
            k=num%16;
            if( k < 10)
            {
                hex[i]=48+k;
            }
            else
            {
                hex[i]=55+k;
            }
            num=num/16;
        }
        printf("hexadecimal number of given number is\n>>");
        for(i=i-1;i>=0;i--)
        {
            printf("%c",hex[i]);
        }
        printf("\n\n");
        break;

        default:
        printf(" invalid selection\n>>");
        goto back;
    }
}
