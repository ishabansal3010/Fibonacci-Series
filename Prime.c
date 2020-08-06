#include <stdio.h>
int prime(int n, int i)
{
 if (i == 1)
  return 1;
 else if (n % i == 0)
  return 0;
 else
  return prime(n, i - 1);
}
void main()
{
 int num, check;
 printf("Enter a number: ");
 scanf("%d", &num);
 check = prime(num, num / 2);
 if (check==1)
  printf("\n%d is a prime number", num);
 else
  printf("\n%d is not a prime number", num);
}
