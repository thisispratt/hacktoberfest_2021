#include<stdio.h>
int main() 
{
      double num1, num2, temp;
      printf("Enter first number: ");
      scanf("%lf", &num1);
      printf("Enter second number: ");
      scanf("%lf", &num2);

      
      temp = num1;

    
      num1 = num2;

     
      num2 = temp;

      printf("\nAfter swapping, firstNumber = %.2lf\n", num1);
      printf("After swapping, secondNumber = %.2lf", num2);
      return 0;
}
