#include<stdio.h>
void main()
{
 int ch;
 printf("Enter Choice (1 to 5): ");
 scanf("%d", &ch);
 switch(ch)
 {
  case 1: printf("\nFood Item: French Fries\nPrice: Rs 99");
          break;
  case 2: printf("\nFood Item: Pasta\nPrice: Rs 179");
          break;
  case 3: printf("\nFood Item: Pizza\nPrice: Rs 239");
          break; 
  case 4: printf("\nFood Item: Sandwich\nPrice: Rs 149");
          break;
  case 5: printf("\nFood Item: Burger\nPrice: Rs 129");
          break;
 }
}
