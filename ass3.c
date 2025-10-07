// write a program to find the largest element in a 1d array
#include <stdio.h>
int main() 
{
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
    return 0;
}
