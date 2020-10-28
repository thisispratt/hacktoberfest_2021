#include<stdio.h>
int main()
{
  int number;
  printf("Enter any integer number:\n");
  scanf("%d",&number);
  if(number%2==0)
  {
  
    printf("%d is even number\n",number);
  }
  else
  {
    printf("%d is odd number\n",number);
    }
}
