/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() 
{
  int n,y,sum=0;

  printf("Enter the Value :");
  scanf("%d",&y);

  for(n=1;y>=n;n++)
  {
    sum=sum+n;
  }
  printf("The sum of the numbers from 1 to n : %d",sum);
  
  return 0;
}

