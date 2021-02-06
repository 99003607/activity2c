#include<stdio.h>
#include<unitconver.h>


void unitconvertion()
{
	int choice1,choice2;
	float input_operand;
	printf("\n---Unit conversions---\n");
	up:printf("\nList of conversions: \n 1)Temperature conversion  2)Time  3)Length 4)Weight \n");
	printf("Enter your choice:");
	scanf("%d",&choice1);
	switch(choice1)
	{
		case 1: printf("\n--Temperature conversion--");
				printf("\n1)Celcuis to farenheit  2)farenheit to celcuis");
				printf("\nEnter your choice:");
				scanf("%d",&choice2);
				printf("\nEnter your input:");
				scanf("%f",&input_operand);
				printf("Output=%f",temperature_func(input_operand,choice2));
				break;
		case 2: printf("\n--Time conversion--");
				printf("\n1)Seconds to minute  2)Minutes to seconds");
				printf("\nEnter your choice:");
				scanf("%d",&choice2);
				printf("\nEnter your input:");
				scanf("%f",&input_operand);
				printf("Output=%f",time_func(input_operand,choice2));
				break;
		case 3: printf("\n--Length conversion--");
				printf("\n1)Inch to Centimeter  2)Centimeter to meter");
				printf("\nEnter your choice:");
				scanf("%d",&choice2);
				printf("\nEnter your input:");
				scanf("%f",&input_operand);
				printf("Output=%f",length_func(input_operand,choice2));
				break;
		case 4: printf("\n--Weight conversion--");
				printf("\n1)miligram to gram  2)gram to kilogram");
				printf("\nEnter your choice:");
				scanf("%d",&choice2);
				printf("\nEnter your input:");
				scanf("%f",&input_operand);
				printf("Output=%f",weight_func(input_operand,choice2));
				break;
		default: printf("\nINVALID CHOICE!!!!!\n");
				 goto up;	 	
	}
}


float temperature_func(float input_operand,int ch)
{
	if(ch==1)
	{
		return(((input_operand*(9/5))+32));
	}
	else
	{
		if(ch==2)
		{
			return(((input_operand-32)*(5/9)));
		}
		else
		{
			return(0);
		}
	}

}
float time_func(float input_operand,int ch)
{
	if(ch==1)
	{
		return((input_operand/60.0));
	}
	else
	{
		if(ch==2)
		{
			return((input_operand*60));
		}
		else
		{
			return(0);
		}
	}
}
float length_func(float input_operand,int ch)
{
	if(ch==1)
	{
		return((input_operand*2.54));
	}
	else
	{
		if(ch==2)
		{
			return((input_operand/100.0));
		}
		else
		{
			return(0);
		}
	}
}
float weight_func(float input_operand,int ch)
{
	if(ch==1)
	{
		return((input_operand*1000.0));
	}
	else
	{
		if(ch==2)
		{
			return((input_operand*1000.0));
		}
		else
		{
			return(0);
		}
	}
}
