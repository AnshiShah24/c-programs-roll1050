// write a program to count constants in a string
#include <stdio.h>
int main() 
{
    char str[100];
    int count = 0;
    char ch;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  

    for(int i = 0; str[i] != '\0'; i++) 
    {
        ch = str[i];
        
        if(ch >= 'A' && ch <= 'Z')
        {
            ch = ch + 32;
        }
        if(ch >= 'a' && ch <= 'z') 
        {
            if(ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u')
            {
                count++;
            }
        }
    }
    
    printf("Number of consonants = %d\n", count);

    return 0;
}

