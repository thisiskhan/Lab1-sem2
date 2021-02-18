#include <stdio.h>

int main(){
    int i, j , x;
    printf("Enter the value of i\n");
    scanf("%d", &i);
    
    printf("Enter the value of j\n");
    scanf("%d", &j);
    //puting x to multiple of j from i
    x = (int)(i/j);

    //assigning x to next largest multiple of j

    x = x + 1;
    x = x*j;

    printf("rounded figure od %d \n", x);
    return 0;
}