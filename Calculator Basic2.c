#include<stdio.h>
#include<math.h>
void main ()
{float x1,x2,w,x,y,z,d,e;
 int n1,n2,n,m,o,a,b,c,num1, num2, gcd, lcm, count=1, small;
 printf("Welcome to Calculator!\nPress Any Key to Continue");
getch();
printf("\n\nVersion:0.10.1\nThis is a work in Progress.\nIf you encounter any bugs please let us know.\nFeel Free to suggest us on how to Improve the program.");
for(n2=100;n2=1;n2++)
{
 printf("\n\nTo Start Calculating, Enter 1.\nTo Read about the Update Notes, Enter 2.\n");
 scanf("%d",&n1);
 switch (n1)
 {case 1:
 for(n1=100;n1=1;n1++)
	{
	printf("\n\nCalculation Types:\n1.Simple Calculations\n2.Equational Calculations\n3.Converter(Coming Soon)");
	printf("\nChoose the Type:\n");
	scanf("%d",&m);
	switch (m)
	{
	case 1:
	
		{
		printf("Enter the First Number:\n");
		scanf("%f",&d);
		printf("Enter the Second Number:\n");
		scanf("%f",&e);
		printf("\nCurrently there are 4 types of operations you can do here. They are:");
		printf("\n1.Addition\n2.Substraction\n3.Multiplication\n4.Division");
		printf("\nEnter the Choice:\n");
		scanf("%d",&n);
		switch(n)
			{
			case 1: w=d+e;
			printf("The Answer is:%0.2f",w);
			break;
			case 2: x=d-e;
			printf("The Answer is:%0.2f,",x);
			break;
			case 3:y=d*e;
			printf("The Answer is:%0.2f",y);
			break;
			case 4:z=d/e;
			printf("The Answer is:%0.2f",z);
			break;
			default:printf("We are working on more options now and we'll add them in a future update.");
			}
		}
	break;
	case 2:
			{
			printf("\nEquational Calculation Choices:\n1.Sreedhar Acharya Quadratic Equation Solving\n2.Greatest Common Divisible and Lowest Common Multiple Calculation");
			printf("\nEnter Your Choice:\n");
			scanf("%d",&o);
			switch (o)
				{
				case 1:
					printf("\nPosition of a,b and c in a Quadratic Equation:\nax^2+bx+c=0");
					printf("\nEnter the value of a:\n ");
					scanf("%d",&a);
					printf("\nEnter the value of b:\n");
					scanf("%d",&b);
					printf("\nEnter the value of c:\n");
					scanf("%d",&c);
					x1=(-b+(sqrt(b*b-4*a*c)))/2*a;
					x2=(-b-(sqrt(b*b-4*a*c)))/2*a;
					printf("\nThe answer is: \n%0.2f, %0.2f",x1,x2);
				break;
				case 2:
					printf("\nEnter 1st integer number\n");
					scanf("%d", &num1);
					printf("\nEnter 2nd integer number:\n");
					scanf("%d",&num2);
					small=(num1<num2) ? num1:num2;
					while(count<=small)
						{
						if(num1 % count ==0 && num2 % count ==0)
						{
							gcd=count;
						}
						count ++;
						}
   					 lcm = (num1*num2)/gcd;
   					 printf("GCD = %d\nLCM = %d\n", gcd,lcm);
				break;
				default: printf("\nCurrently this option is unavailable.We are working on more options now and we'll add them in a future update.");
				}
			}
		break;
		case 2021:printf("\nThank You for using\nSimple Menu Driven Calculater.\nCreated By:\nAnik Adhikari\nKrishnendu Das\nProgram Director:Anik Adhikari\nIDE Used:DEV C++\nLanguage Used:C\nQuality Assurance:Krishnendu Das\nSpecial Thanks to:\nOur Computer Teachers\nOur Incredible Friends\nCreation Started:05-12-2021");
		break;
		case 3: printf("\nConverter is coming soon");
		break;
		default:printf("\nCurrently this option is unavailable.We are working on more options now and we'll add them in a future update.");
	}
	getch();
}
break;
case 2:
	printf("\nWhat's New in 0.10.1:\n**Interface Changes\n*Added Introductory Text.\n*Added Update Notes.\n*Changed the way of Input a little so user can easily Understand.\n*Complex Calculations are now called Equational Calculations.\n**Added GCD and LCM in Equational Calculations. '");
break;
default:printf("\nSelect Correct Option");
}
getch();
}
}


