#include <stdio.h>
#include <string.h>
void my_strcat(char *s, char *t);
int main()
{
    char s[200];
    char t[100];
    printf("enter the  first string (s)\n");
    gets(s);
    printf("enter the  second string (t)\n");
    gets(t);
    my_strcat(s, t);
    printf("concatenated string is \n");
    puts(s);
    return 0;
}
void my_strcat(char *s, char *t)
{
    //increasing  pointer  upto  null  character
    while (*s)
    {
        s++;
    }
    //now assgning string t to string s from ‘\0’
    while ((*s++ = *t++))
    {
        ;
    }
}