#include<stdio.h>
#include<stdlib.h>
int main()
{
  char str[24];
  printf('Enter the String:');
  gets(str);
  printf("Printing the characters::\n");
   for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') { // not a white space
            printf("%c\n", str[i]); // printing 
        }
   }
}