// IT-C SEM1 SPPS ASSIGNMENT 1 SET8

#include<stdio.h>
#include<math.h>

//1. Write a C program to demonstrate Complex number arithmetic. 
// int main(void)
// {
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

//4b. Make a program that prints a pyramid of stars from descinding to ascending order based on the number input using loops.

// int main(void)
// {
//   int n, i, j, k;
//   printf("Enter a positive number\n");
//   scanf("%d",&n);
//   for(j=1; j <= n; j++)
//   {
//     for(k=1; k < j; k++)
//       printf(" ");
//     for (i = n; i >= j; i--)
//     {
//       printf("*");
//     }
//     printf("\n");
//   }
//   return 0;
// }

//4a. Make a program that prints a half pyramid of numbers from ascending to descending order based on the number input using loops.

// int main(void)
// {
//  int n, i, j;
//  printf("Enter an integer\n");
//  scanf("%d",&n);
//  for(i=1; i <= n; i++)
//   {
//     for (j = 1; j <= i; j++)
//     {
//       printf("%d ", i);
//     }
//     printf("\n");
//   }
//  return 0;
// }

//3. Write a C program to print the right most digit of an integer. 

// int main(void)
// {
//   long long int n;
//   int right;
//   printf("Enter a number\n");
//   scanf("%lld",&n);
//   right = n % 10;
//   printf("%d\n", right);
// }

//5. Write a C program to convert radians to degre

// int main(void)
// {
//   float r, d;
//   printf("Enter measurement in radians\n");
//   scanf("%f", &r);
//   d = r*180/3.14;
//   printf("%.2f in degrees is %.2f\n", r, d);
//   return 0;
// }
