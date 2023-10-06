#include <stdio.h>

void main()
{
    int loop, num, i, sum = 0;
    scanf("%d", &loop);
    int arr[loop];
    for (int i = 1; i <= loop; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i <= loop; i++)
    {
        if (i == 0)
        {
            printf("A ");
        }
        else
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    while (1)
    {
        scanf("%d", &num);
        sum += num ;
        sum += arr[sum];
        if ( sum < 1)
        {
            sum = 1;
        }
        else if (sum > loop)
        {
            sum = loop;
        }
        for (i = 0; i <= loop; i++)
        {
            if (i == 0)
            {
                printf("X ");
            }
            else if (i == sum)
            {
                printf("A ");
            }
            else
            {
                printf("%d ", arr[i]);
            }
        }
        printf("\n");
        if (sum == loop)
        {
            break;
        }
    }
}