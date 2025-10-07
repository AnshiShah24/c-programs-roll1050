// write a program to check whether the number is armstrong or not
#include<stdio.h>
void main()
{
  anshi:
  char ch;
  int n,r,a,sum=0,b;
  printf("Enter any number:");
  scanf("%d",&n);
  b = n;
  for(; n!=0;)
  {
    r = n % 10;
    sum = sum + (r*r*r);
    n = n/10;
  }
  if(sum==b)
  {
    printf("%d is an Armstrong number.",b);
  }
  else
  {
    printf("%d is not an Armstrong number.",b);
  }
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
}
