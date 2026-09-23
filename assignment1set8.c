// IT-C SEM1 SPPS ASSIGNMENT 1 SET8

#include<stdio.h>
#include<math.h>


// int main(void)
// {

//   //1. Write a C program to demonstrate Complex number arithmetic. 

//   float r1, r2, i1, i2;
//   char ch;
//   printf("Enter 1st complex number real imaginary\n");
//   scanf("%f %f", &r1, &i1);
//   printf("Enter 2nd complex number real imagianry\n");
//   scanf("%f %f", &r2, &i2);
//   printf("Enter your operator\n");
//   scanf(" %c", &ch);// use 'space' %c bcz %c read \n as the char
//   printf("\nCalculating %.2f %+.2fi %c %.2f %+.2fi\n\n", r1, i1, ch, r2, i2);
//   switch (ch)
//   {
//   case '+':
//     printf("Sum of them is %.2f %+.2fi\n", r1+r2, i1+i2);
//     break;
//   case '-':
//     printf("Difference between them is %.2f %+.2fi\n", r1-r2, i1-i2);
//     break;
//   case '*':
//     printf("Product of them is %.2f %+.2fi\n", r1*r2 - i1*i2, r1*i2 - i1*r2);
//     break;
//   case '/':
//     {
//     float denom = (pow(r2, 2)+pow(r1, 2));
//     printf("Quotient of them is %.2f %+.2fi\n", (r1*r2 + i1*i2)/denom, (i1*r2 - r1*i2)/denom);
//     break;
//     }
//   default:
//     printf("Invalid operator!!\n");
//     break;
//   }
//   return 0;
// }

int main(void)
{

  //3. Make a program that prints stars from descinding to ascending order based on the number input using loops.

  int n, i, j;
  printf("Enter a positive number\n");
  scanf("%d",&n);
  // 5
  for(j=1; j<=n; j++)
  {
    for (i=n; i >= j; i--)
    {
      printf("* ");
    }
    printf("\n");
  }
  return 0;
}  
