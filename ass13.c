// write a program to convert miles to kilometers
#include<stdio.h>
int main()
{
  anshi:
  char ch;
  float miles, kilometer;
  printf("Enter the distance in miles:");
  scanf("%f",&miles);
  
  kilometer = miles * 1.60934;
  printf("%.2f miles = %.2f kilometer",miles,kilometer);
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
