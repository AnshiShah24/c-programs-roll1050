// write a program to print first n natural numbers in reverse
#include <stdio.h>
int main()
{
    int n,i;
    printf("Enter a positive number: ");
    scanf("%d", &n);
    printf("First %d natural numbers in reverse order:\n", n);

    for(i=n;i>=1;i--) 
    {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}

