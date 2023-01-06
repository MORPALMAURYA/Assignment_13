//. Write a recursive function to calculate sum of first N odd natural numbers
#include<stdio.h>
int sum(int n);
int main()
{
          int n;
          printf("Enter number:");
          scanf("%d",&n);
          printf("sum of odd num = %d",sum(n));
          return 0;
}
int sum(int n)
{
          if(n==1)
          return 1;
          else
          return (2*n-1)+sum(n-1);
}