#include <stdio.h>
#include <string.h>

int main()
{
  char operators[] = {'+', '-', '*', '/'};
  char operator;
  double first, second;

  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &operator);

  if (!memchr(operators, operator, sizeof(operators)))
  {
    printf("Invalid operator: %c\n", operator);
    return 1;
  }

  printf("Enter the first number: ");
  scanf("%lf", &first);

  printf("Enter the second number: ");
  scanf("%lf", &second);

  switch (operator)
  {
  case '+':
    printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
    break;
  case '-':
    printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
    break;
  case '*':
    printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
    break;
  case '/':
    printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
    break;
  default:
    printf("Error! operator is not correct");
  }

  printf("\n");

  return 0;
}