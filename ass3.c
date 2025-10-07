// write a program to find the largest element in a 1d array
#include <stdio.h>
int main() 
{
    anshi:
    char ch;
    int arr[50], n, i, largest;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    largest = arr[0];
    for (i = 1; i < n; i++) 
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    printf("The largest element in the array is: %d\n", largest);
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
