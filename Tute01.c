/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>
int main() 
{
  int mark1,mark2;
  float sum,avg;

  printf("Enter the First  Mark :");
  scanf("%d",&mark1);
  printf("Enter the Second  Mark :");
  scanf("%d",&mark2);

  sum=mark1+mark2;
  avg=sum/2;

  printf("Avarage is : %.2f",avg);

  return 0;
}

