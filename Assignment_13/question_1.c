//Write a recursive function to calculate sum of first N natural numbers
#include<stdio.h>
int sum(int n);
int main()
{
          int n;
          printf("Enter number");
          scanf("%d",&n);
          printf("sum=%d",sum(n));
          return 0;
}
int sum(int n)
{
          if(n==0)
          return n;
          else
          return n+sum(n-1);
}
