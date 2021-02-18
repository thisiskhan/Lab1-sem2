#include<stdio.h>
//RECURSIVE FUNCTION
//taking n!=n*(n-1)!
int factorial(int n)
{
	if(n==0)
	return 1;
	else
	return(n*factorial(n-1));
}
int main()
{
     int N;
	printf("ENTER THE THE NUMBER \n");
	scanf("%d",&N);
	printf("Factorial of number is %d \n",factorial(N));
	return 0;
}