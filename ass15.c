// write a program to check whether the number is prime or not
#include<stdio.h>
void main()
{
   int n,i,a=0;
   printf("Enter any number:");
   scanf("%d",&n);
   
   for(i=1;i<=n;i++)
   {
      if(n%i==0)
      {
         a++;
      } 
   }
   
    if(a==2)
    {
      printf("%d is a prime number.",n);
    }
   
   else
   {
       printf("%d is not a prime number.",n);
   }
}
