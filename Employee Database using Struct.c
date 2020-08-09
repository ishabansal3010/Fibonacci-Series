#include<stdio.h>
#include<conio.h>
struct Employee
{
 int empno, salary;
 char name[20], dp[20];
};
void main()
{
 Employee E[20];
 int i;
 clrscr();
 for(i=0; i<20; i++)
 {
  printf("\nEnter Employee Number: ");
  scanf("%d", &E[i].empno);
  printf("\nEnter name of Employee: ");
  scanf("%s", &E[i].name);
  printf("\nEnter Department of Employee: ");
  scanf("%s", &E[i].dp);
  printf("\nEnter Salary of Employee: ");
  scanf("%d", &E[i].salary);
  }

 printf("\nName\tEmp No\tDepartment\tSalary");
 for(i=0; i<20; i++)
  printf("\n%s\t%d\t%s\t%d", E[i].name, E[i].empno, E[i].dp, E[i].salary);

}
