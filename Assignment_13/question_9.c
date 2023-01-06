//Write a program in C to count the digits of a given number using recursion
#include<stdio.h>
int count_digit(int num);
int main()
{
          int num,result;
          printf("Enter a number:");
          scanf("%d",&num);
          printf("total digit is = %d",count_digit(num));
          return 0;
}
int count(int num)
{
          if(num<=9)
          return 1;
          else
          return 1+count_digit(num/10);
}