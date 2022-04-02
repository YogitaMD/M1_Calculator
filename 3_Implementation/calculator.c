#include "./inc/calculator.h"
#include <stdio.h>
#include <stdlib.h>
typedef enum options {
  NONE,
  Add,
  Sub,
  Multi,
  Div,
  Squreroot,
  Power,
  Modulus,
  EXIT
} options_t;

int main() {
  int choice = NONE;
  float ans,a,b;

  printf("\n\t**** Welcome to Calculator Project ****");
  printf("\n\t***************************************\n");
  for (;;) {

    printf("\n\tSelect your choice: \t");
    printf("\n\t1.Addition \n\t2.Substraction \n\t3.Multiplication \
    \n\t4.Division \n\t5.Squareroot \n\t6.Power \n\t7.Modulo \n\t8.Exit\n");

    printf("\n\tEnter your choice: \n\t");
    scanf("%d", &choice);

    switch (choice) {
    case Add :
    {
      float a,b;
      float *p1,*p2;
      p1=&a;
      p2=&b;
      printf("\tEnter 1st operand :\n\t");
      scanf("%f",p1);
      printf("\tEnter 2nd operand :\n\t");
      scanf("%f",p2);
      ans=add(*p1,*p2);
      printf("\t%f\n",ans);
      break;
    }
    case Sub :
    {
      float x,y;
      float *p2,*p1;
      p1=&x;
      p2=&y;
      printf("\tEnter 1st operand :\n \t");
      scanf("%f",p1);
      printf("\tEnter 2nd operand :\n\t");
      scanf("%f",p2);
      ans=sub(*p1,*p2);
      printf("\t%f\n",ans);
      break;
    }

    case Multi :
    {
      float x,y;
      printf("\tEnter 1st operand :\n \t");
      scanf("%f",&x);
      printf("\tEnter 2nd operand :\n\t");
      scanf("%f",&y);
      ans=multi(x,y);
      printf("\t%f\n",ans);
      break;
    }

    case Div :
    {
      div_t ans;
      int x,y;
      printf("\tEnter 1st operand :\n \t");
      scanf("%d",&x);
      printf("\tEnter 2nd operand :\n\t");
      scanf("%d",&y);
      
      if(0 == y)
      {
        printf("\tEnter proper operands!!!!!!!!!!!!!!\n");
        break;
      }
      else{
        ans=div(x,y);  
        printf("\tQuotient part of (x/y) = %d\n", ans.quot);
        printf("\tRemainder part of (x/y) = %d\n", ans.rem);
        break;
      }
    }
    case Squreroot :
    {
      float x;
      printf("\tEnter the value of x : \n\t");
      scanf("%f",&x);
      ans=squarerootV(x);
      printf("\t%f \n",ans);
      break;
    }
    case Power :
    {
      float x,y;
      printf("\tEnter 1st operand :\n \t");
      scanf("%f",&x);
      printf("\tEnter 2nd operand :\n\t");
      scanf("%f",&y);
      ans=powerV(x,y);
      printf("\t%f\n",ans);
      break;
    }
    case Modulus :
    {
      float x,y;
      printf("\tEnter 1st operand :\n \t");
      scanf("%f",&x);
      printf("\tEnter 2nd operand :\n\t");
      scanf("%f",&y);
      ans=modulo(x,y);
      printf("\t%f\n",ans);
      break;
    }

    case EXIT:
      printf("\n\t **** Exiting Project **** ");
      printf("\n\t *************************\n");
      exit(0);
      break;

    default:
      printf("\n\t *** Selected choice not available *** \t");
      printf("\n\t ************************************* \n");
    }
  }
}
