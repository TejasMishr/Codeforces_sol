#include <stdio.h>
#include <string.h>
int main()
{
    char str[5];
    printf("Enter The String : ");
    scanf("%s",&str);
 
    int len = strlen(str);
    // Conversion according to ASCII values
    for (int i = 0; i < len; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            // Convert lowercase to uppercase
            str[i] = str[i] - 32;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            // Convert uppercase to lowercase
            str[i] = str[i] + 32;
    }
 
    printf("%s", str);
    return 0;
}