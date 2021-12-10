#include<stdio.h>

#include<math.h>

void main ()

{  

  int loop;

  for(loop=10;loop=1;loop++)

  {  

  float x1,x2,w,x,y,z,d,e;

  int n,m,o,a,b,c;

  printf("\n\nCalculation Types:\n1.Simple Calculations\n2.Complex Calculations");

  printf("\nChoose the Type:\n");

  scanf("%d",&m);

  switch (m)

  {

  case 1:

  

    {

    printf("Enter the two Numbers:\n");

    scanf("%f%f",&d,&e);

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

      default:printf("Sorry we only have 4 options by now.\nBut we are working on more options now and we'll add them in a future update.");

      }

    }

  break;

  case 2:

      {

      printf("\nComplex Calculation Choices:\n1.Sreedhar Acharya Quadratic Equation Solving");

      printf("\nEnter Your Choice:\n");

      scanf("%d",&o);

      switch (o)

        {

        case 1:

          printf("Enter the values of a,b,c respectively: ");

          scanf("%d %d %d", &a,&b,&c);

          x1=(-b+(sqrt(b*b-4*a*c)))/2*a;

          x2=(-b-(sqrt(b*b-4*a*c)))/2*a;

          printf("\nThe answer is: \n%0.2f, %0.2f",x1,x2);

        break;

        default: printf("\nCurrently this option is unavailable.We are working on more options now and we'll add them in a future update.");

        }

      }

    break;

    case 2021:printf("\nThank You for using\nSimple Menu Driven Calculater.\nCreated By:\nAnik Adhikari\nKrishnendu Das\nProgram Director:Anik Adhikari\nIDE Used:DEV C++\nLanguage Used:C\nQuality Assurance:Krishnendu Das\nSpecial Thanks to:\nOur Computer Teachers\nOur Incredible Friends\nCreation Started:05-12-2021");

    break;

    default:printf("\nCurrently this option is unavailable.We are working on more options now and we'll add them in a future update.");

  }

  }

}
