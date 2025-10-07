// write a program to find the largest of five numbers
#include<stdio.h>
int main()
{
  anshi:
  char ch;
  int a, b, c, d, e, largest;
  printf("Enter five numbers: ");
  scanf(" %d %d %d %d %d", &a, &b, &c, &d, &e);
  
  if (a > b && a > c && a > d && a > e) 
  {
        largest = a;
  } 
    else if (b > c && b > d && b > e)
    {
        largest = b;
    } 
    else if (c > d && c > e) 
    {
        largest = c;
    } 
    else if(d > e)
    {
      largest = d;
    }
    else
    {
        largest = e;
    }

    printf("The largest number is: %d\n", largest);
     getchar();
    printf("\n Do you want to continue?");
    scanf("%c",&ch);
  
    if(ch=='y')
    {
      goto anshi;
    }
    else
   {
     printf("\n THANK YOU");
   }
return 0;
}
