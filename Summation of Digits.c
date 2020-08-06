#include<stdio.h>
int summation(int n)
{
 if(n!=0)
  return(n%10 + summation(n/10));
 else
  return 0;
}
void main()
{
 int num, result;
 printf("Enter the number: ");
 scanf("%d", &num);
 result=summation(num);
 printf("\nSummation of all digits: %d", result);
}
