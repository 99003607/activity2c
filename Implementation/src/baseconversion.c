 #include<stdio.h>
 #include<baseconversion.h>

int a,i,k;
int num;
int bin[32],oct[100000];
char hex[10000];
int dec;
int x,y,z;

  
void baseconversion()
{
    int a,i,k;
    int num;
    int bin[32],oct[100000];
    char hex[10000];
    int dec;
    int x,y,z;
  
    
    printf("select the conversions \n DEC TO bin = 1 \n DEC TO OCT = 2 \n DEC TO HEX = 3 \n  \n>>");
    back:scanf("%d",&a);
    switch(a)
    {
        case 1:
        printf("enter decimal number\n>>");
        scanf("%d",&num);
        printf("%d",dectobin(num));
    
        printf("\n\n");
        break;

        case 2:
        printf("enter decimal number\n>>");
        scanf("%d",&num);

        dectooct(num);
        
        printf("\n\n");
        break;

        case 3:
        printf("enter decimal number\n>>");
        scanf("%d",&num);
        dectohex(num);
        
        printf("\n\n");
        break;

        default:
        printf(" invalid selection\n>>");
        goto back;
    }
}

int dectobin(x)
{
    for(i=0;x>0;i++)
        {
            bin[i]=x%2;
            x=x/2;
        }
        printf("binary of given number is\n>>");
        for(i=i-1;i>=0;i--)
        {
            printf("%d",bin[i]);
        }
        return bin;
}

int dectooct(y)
{
    for(i=0;y>0;i++)
        {
            oct[i]=y%8;
            y=y/8;
        }
        printf("ocatal number of given number is\n>>");
        for(i=i-1;i>=0;i--)
        {
            printf("%d",oct[i]);
        }
        return oct;
}

int dectohex(z)
{
  for(i=0;z>0;i++)
        {
            k=z%16;
            if( k < 10)
            {
                hex[i]=48+k;
            }
            else
            {
                hex[i]=55+k;
            }
            z=z/16;
        }
        printf("hexadecimal number of given number is\n>>");
        for(i=i-1;i>=0;i--)
        {
            printf("%c",hex[i]);
        }
        return hex;
}
