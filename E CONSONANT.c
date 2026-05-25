#include <stdio.h>
#include <string.h>
 main()
{
    char str[30];
    int vow = 0, cons = 0, i = 0;

    printf("Enter the string: ");
    gets(str);

    // Convert string into uppercase
    strupr(str);

    printf("Uppercase String = %s\n", str);

    while(str[i] != '\0')
    {
        if(str[i] >= 'E')
        {
            if(str[i] == 'E')
                vow++;
            else
                cons++;
        }
        i++;
    }

    printf("Number of vowels = %d\n", vow);
    printf("Number of consonants = %d\n", cons);
}