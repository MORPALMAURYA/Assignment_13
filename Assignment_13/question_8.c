//Write a recursive function to print first N terms of Fibonacci series
#include<stdio.h>
int fib(int num);
int main()
{
          int num;
          printf("Enter a number:");
          scanf("%d",&num);
          printf("fibonacci series is = %d",fib(num));
          return 0;
}
int fib(int num)
{
          if(num<=1)
          return num;
          else
          return fib(num-1)+fib(num-2);
}