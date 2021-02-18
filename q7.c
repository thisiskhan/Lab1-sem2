#include<stdio.h>
#include<string.h>
int strend(char *s,char*t);
int main()
{
	char s[100],t[50];
	printf("enter the string\n ");
	gets(s);
	printf("enter the string to be search\n");
	gets(t);
	printf("%d \n",strend(s,t));
	return 0;
}
int strend(char *s,char *t)
{
	//taking string c to and initialize from 
      //length l1-l2 to l1
      int l1,l2,i,k=0;
	char c[20];
	l1=strlen(s);
	l2=strlen(t);
	for(i=l1-l2;i<=l1;i++)
	{
		c[k++]=s[i];
	}
      //taking last character as null char to c
	c[k]='\0';
     //if c and t are equal than return 1 else 0
	if(strcmp(t,c)==0)
	return 1;
	else
	return 0;
}
