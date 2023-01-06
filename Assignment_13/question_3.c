//. Write a recursive function to calculate sum of first N even natural numbers
#include<stdio.h>
int sum(int n);
int main()
{
          int n;
          printf("Enter a number:");
          scanf("%d",&n);
          printf("sum of n natural numbers = %d",sum(n));
          return 0;
}
int sum(int n)
{
          if(n==0)
          return n;
          else
          return 2*n+sum(n-1);
}          