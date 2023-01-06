//Write a recursive function to calculate sum of digits of a given number
#include<stdio.h>
int sum_of_digit(int num);
int main()
{
          int num;
          printf("Entre number:");
          scanf("%d",&num);
          printf("sum of digits is = %d",sum_of_digit(num));
          return 0;
}
int sum_of_digit(int num)
{
          if(num%10==num)
          return num;
          else
          return (num%10)+sum_of_digit(num/10);

}
