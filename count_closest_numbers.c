#include <stdio.h>
#include <limits.h>

void main()
{
    int loop, count = 0, sum = 0, min = INT_MAX;
    scanf("%d", &loop);
    int num[loop];

    for (int i = 0; i < loop; i++)
    {
        scanf("%d", &num[i]);
    }
    int a;
    int diff = 0;
    scanf("%d", &a);
    for (int i = 0; i < loop; i++)
    {

        diff = a - num[i];
        if (diff < 0)
        {
            diff = diff * (-1);
        }
        if (diff < min)
        {
            min = diff;
            count = 1;
        }
        else if(diff == min){
            count = count + 1;
        }
    }
    printf("%d\n%d", min, count);
}