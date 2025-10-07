// write a program to print first n natural numbers in reverse
#include <stdio.h>
int main()
{
    anshi:
    char ch;
    int n,i;
    printf("Enter a positive number: ");
    scanf("%d", &n);
    printf("First %d natural numbers in reverse order:\n", n);

    for(i=n;i>=1;i--) 
    {
        printf("%d ", i);
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
    printf("\n");
    return 0;
}

