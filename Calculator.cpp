//Calculator V2 by -<EnisOZBEK>-

#include<stdio.h>
#include<conio.h>//Helps to keep program on your screen untill you press anything on your keyboard with getch();.
int main()
{
	printf("\t\t\t\t\t\t-<ENIS OZBEK>-");//Writes my name on the screen.
	printf("\n\n\nWelcome To The Calculator V2!!! \n\t\t\tby -<EnisOZBEK>-");
	
	int opt;
	float num1,num2,result;
	
	printf("\n\nPlease enter the first Integer:\n");//Allows you to write the numbers that you want to operate.
	scanf("%f",&num1);
	printf("Please enter the second Integer:\n");
	scanf("%f",&num2);
		
	printf("\n\nPlease select the operation you want:\n");//Let's you choose the operation you want to do.
	printf("1-Addition.\n2-Substraction.\n3-Multiplication.\n4-Division.\n5-Exit.\n");
	scanf("%d",&opt);
	
	switch(opt)
		{
			case 1://Addition as case 1.
				result=num1+num2;
				printf("\nAddition of  %.2f and %.2f is: %.2f",num1,num2,result);
				break;
				
			case 2://Substraction as case 2.
				result=num1-num2;		
				printf("\nSubstraction of %.2f and %.2f is: %.2f",num1,num2,result);
				break;
				
			case 3://Multiplication as case 3.
				result=num1*num2;
				printf("\nMultiplication of %.2f and %.2f is: %.2f",num1,num2,result);
				break;
				  
			case 4://Division as case 4. 
			if (num1==0 && num2==0)//number/0 and 0/0 situations are taken under control here as ladder-if statement.
			{
				printf("Dividing zero(0) by zero(0) is uncertain!");
			}
			else if(num2==0)
			{
				printf("Dividing by zero(0) is undefined!\n");
			}
			else
			{
				result=num1/num2;
				printf("\nDivision of %.2f and %.2f is:  %.2f",num1,num2,result);
			}  
				break;
			
			case 5://Exit as case 5. 
				return 0;
				break;
				 
			default://Ýncorrect entering as default.
				printf("\nYou entered incorrectly!\n");
				break; 
		}
	getch();
}
