// write a program to calculate the perimeter of square
#include <stdio.h>
int main()
{
    start:
    char ch;
    int side, perimeter;
    printf("Enter any side of the square: ");
    scanf("%d", &side);
    perimeter = 4 * side;
    printf("The perimeter of the square is: %d \n", perimeter);
    getchar();
    printf("\n Do you want to continue?");
    scanf("%c",&ch);
  
   if(ch=='y')
    {
      goto start;
   }
   else
    {
       printf("\n THANK YOU");
    }
    return 0;
}
