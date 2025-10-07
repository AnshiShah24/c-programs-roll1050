// write a program to insert an element at a specific position in an array

#include<stdio.h>
void main()
{
  anshi:
  char ch;
  int a[100];
  int i,pos,value,n;
  printf("\n Enter size of array:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      printf("\n Enter value of a[%d]:",i);
      scanf("%d",&a[i]);
  }
      
  printf("\n Enter the position:");
  scanf("%d",&pos);
  printf("\n Enter the value:");
  scanf("%d",&value);
  for(i=n;i>pos;i--)
  {
    a[i]=a[i-1];
  }
  a[pos]=value;
  for(i=0;i<n+1;i++)
  {
   printf("%d ",a[i]); 
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
