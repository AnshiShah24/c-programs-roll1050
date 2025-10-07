// write a program to convert fahrenheit to celcius
#include<stdio.h>
int main()
{
  anshi:
  char ch;
  float fah,celcius;
  printf("Enter the temperature in fahrenheit:");
  scanf("%f",&fah);
  
  celcius=(fah-32)*5.0/9.0;
  printf("%.2f Fahrenheit = %.2f Celcius\n",fah,celcius); 
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
