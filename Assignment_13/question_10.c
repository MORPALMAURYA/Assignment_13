// Write a program in C to calculate the power of any number using recursion.
#include<stdio.h>
int power_of_num(int base,int power);
int main()
{
          int base,power;
          printf("Enter base:");
          scanf("%d",&base);
          printf("Enter power:");
          scanf("%d",&power);
          printf("%d^%d=%d",base,power,power_of_num(base,power));
          return 0;
}
int power_of_num(int base, int power)
{
          if(power==0)
          return 1;
          else
          return (base*power_of_num(base,power-1));
}