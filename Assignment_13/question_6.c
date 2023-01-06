//Write a recursive function to calculate factorial of a given number
#include<stdio.h>
int fact(int n);
int main()
{
          int n;
          printf("Enter a number:");
          scanf("%d",&n);
          printf("factorial of %d is = %d",n,fact(n));
          return 0;
}
int fact(int n)
{
          if(n==1)
          return n;
          else
          return n*fact(n-1);
}