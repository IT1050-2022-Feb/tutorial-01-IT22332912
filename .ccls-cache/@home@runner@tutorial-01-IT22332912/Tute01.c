/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main(void) {
  int s1,s2,tot;
  float avg;

  printf("Enter 1 subject mark: ");
  scanf("%d",&s1);
  printf("Enter 2 subject mark: ");
  scanf("%d",&s2);

  tot = s1 + s2;
  avg = tot / 2.0;

  printf("Average = %.2f",avg);
  
  return 0;
}

