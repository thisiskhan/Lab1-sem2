#include <stdio.h>

int main(){
    int c = 0, n;
    printf("Enter the number \n");
    scanf("%d", &n);
    //dividing n by 10 repeatidly and adding c by 1 again upto n is not become 0

    while(n!=0){
        n = n /10;
        ++c;
    }
    printf("no. of digits in number is %d\n", c);
    return 0;
}