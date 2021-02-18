#include <stdio.h>
int main()
{
    char s[100];
    int i = 0, l = 0;
    printf("enter the string \n");
    gets(s);
    //taking i to check string upto  null  character
    //simultaneously  increasing  l as string length
    while (s[i] != '\0')
    {
        l++;
        i++;
    }
    printf("length of string is %d \n", l);
    return 0;
}