#include<stdio.h>

void main() 
{
    char str[555];
    int i;
    
   printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
   printf("Program to find frequancy of each character in string.\n");
   printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");

    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);

    printf("\n");
    
    int freq[26] = {0};

    for (i = 0; str[i] != '\0'; i++) 
	{
        freq[str[i]-'a'] += 1;
    }

    printf("The frequency of characters is -\n");
    for (i = 0; i < 26; i++) 
	{
        if (freq[i] != 0) {
            
            char c = 'a' + i;
            printf("\t%c = %d\n", c, freq[i]);
        }
    }

}