// write a program to calculate the perimeter of square
#include <stdio.h>
int main()
{
    anshi:
    char ch;
    float side, perimeter;
    printf("Enter any side of the square: ");
    scanf("%f", &side);
    perimeter = 4 * side;
    printf("The perimeter of the square is: %f\n", perimeter);
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
