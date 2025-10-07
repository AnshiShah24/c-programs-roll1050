// write a program to convert fahrenheit to celcius
#include<stdio.h>
int main()
{
  float fah,celcius;
  printf("Enter the temperature in fahrenheit:");
  scanf("%f",&fah);
  
  celcius=(fah-32)*5.0/9.0;
  printf("%.2f Fahrenheit = %.2f Celcius\n",fah,celcius); 
return 0;
}
