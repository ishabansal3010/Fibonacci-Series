#include<stdio.h>
int lcm(int a, int b)
{ 
 static int common = 1;
 if (common % a == 0 && common % b == 0)
  return common;
 common++;
 lcm(a, b);
}
void main()
{
 int x, y, result;
 printf("Enter two numbers: ");
 scanf("%d%d", &x, &y);
 result = lcm(a, b);
 printf("The LCM of %d and %d is %d\n", x, y, result);
}
