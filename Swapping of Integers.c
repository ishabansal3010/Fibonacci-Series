#include<stdio.h>  
 int main()    
{    
int a=10, b=20;      
printf("Before swap a=%d b=%d",a,b);     //will print original values 
a=a+b;                   //here a=30
b=a-b;                   //here b=10
a=a-b;                   //here a=20 
printf("\nAfter swap a=%d b=%d",a,b);    //will print swapped values
return 0;  
} 
