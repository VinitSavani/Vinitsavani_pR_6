#include<stdio.h>
 
void main()
{
   char string[99], v = 0;
   int f = 1, i;
   
   printf("================================================\n");
   printf("Program to find string is palindrome or not.\n");
   printf("================================================\n\n");
 
   printf("Enter the String:");
   gets(string);
   
   printf("\n");
 
   for (i = 0; string[i] != '\0'; i++)
   {
     v ++;
   }
 
   for (i = 0; i < v / 2; i++)
   {
      if (string[i] != string[v - 1 - i])
      {
         f = 0;
         break;
      }
   }
 
   if (f == 1)
   {
      printf("%s :- is a palindrome.", string);
    }else
    {
      printf("%s :- is not a palindrome.", string);
    } 
      
}