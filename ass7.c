// write a program to compute the LCM of two numbers
#include <stdio.h>
int main()
{
    anshi:
    char ch;
    int num1, num2, lcm, i;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if(num1 > num2)
        lcm = num1;
    else
        lcm = num2;

    for(i = lcm; ; i++) 
    {
        if(i % num1 == 0 && i % num2 == 0)
        {
            lcm = i;   
            printf("LCM of %d and %d = %d\n", num1, num2, lcm);
            return 0;
      printf("LCM of %d and %d = %d\n", num1, num2, lcm);
        }
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
