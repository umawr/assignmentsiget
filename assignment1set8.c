// SPPS SEM1 ASSIGNMENT1 SET8
#include<stdio.h>
int main(void)
{
  float r1, r2, i1, i2;
  char ch;
  printf("Enter 1st complex number real imaginary\n");
  scanf("%f %f", &r1, &i1);
  printf("Enter 2nd complex number real imagianry\n");
  scanf("%f %f", &r2, &i2);
  printf("Enter your operator\n");
  scanf(" %c", &ch);// use 'space' %c bcz %c read \n as the char

  switch (ch)
  {
  case '+':
    printf("Sum of them is %.2f %+.2fi\n", r1+r2, i1+i2);
    break;
  case '-':
    printf("Difference between them is %.2f %+.2fi\n", r1-r2, i1-i2);
    break;
  case '*':
    printf("Product of them id %.2f %+.2fi\n", r1*r2 - i1*i2, r1*i2 - i1*r2);
    break;
  default:
    printf("Invalid operator!!\n");
    break;
  }
  return 0;
}
