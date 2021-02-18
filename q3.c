#include <stdio.h>
#include <math.h>
int main()
{
    printf("perfect square of aabb is\n");
    int i, sq;
    float f;
    for (i = 1000; i < 10000; i++)
    {
        if (i % 10 == (i / 10) % 10 && (i / 100) % 10 == (i / 1000) % 10)
        {
            //cheking for perfect square
            f = sqrt((double)i);
            sq = f;
            if (sq == f)
                printf("%d\n", i);
        }
    }
    return 0;
}