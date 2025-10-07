// write a program to convert a string into uppercase
#include <stdio.h>
int main()
{

    char str[50];
    int i;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  

    for (i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {  
            str[i] -= 32;            
        }
    }

    printf("String in Uppercase: %s\n", str);
    
    return 0;
}
