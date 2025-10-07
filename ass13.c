// write a program to convert miles to kilometers
#include<stdio.h>
int main()
{
  float miles, kilometer;
  printf("Enter the distance in miles:");
  scanf("%f",&miles);
  
  kilometer = miles * 1.60934;
  printf("%.2f miles = %.2f kilometer",miles,kilometer);
return 0;
}
