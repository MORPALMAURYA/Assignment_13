// Write a recursive function to calculate sum of squares of first n natural numbers
#include<stdio.h>
int sum(int n);
int main()
{
          int n;
          printf("Enter number");
          scanf("%d",&n);
          printf("sum of squares of n natural numbers=%d",sum(n));
          return 0;
}
int sum(int n)
{
          if(n==0)
          return n;
          else
          return n*n+sum(n-1);
}