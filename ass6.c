// write a program to find the smallest of four numbers
#include<stdio.h>
int main()
{
  int a, b, c, d, smallest;
  printf("Enter four numbers: ");
  scanf(" %d %d %d %d", &a, &b, &c, &d);
  
  if (a < b && a < c && a < d) 
  {
        smallest = a;
  } 
    else if (b < c && b < d)
    {
        smallest = b;
    } 
    else if (c < d) 
    {
        smallest = c;
    } 
    else
    {
        smallest = d;
    }

    printf("The smallest number is: %d\n", smallest);
  return 0;
}
