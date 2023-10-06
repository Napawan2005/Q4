#include <stdio.h>

void main()
{
    int loop, count = 0;
    scanf("%d", &loop);
    int ohh_1[loop];
    for (int i = 0; i < loop; i++)
    {
        scanf("%d", &ohh_1[i]);
    }
    int x, y;
    double sum = 0;
    double ans = 0;
    scanf("%d %d", &x, &y);
    for (int i = 0; i < loop; i++)
    {
        if (ohh_1[i] >= x && ohh_1[i] <= y)
        {
            sum += ohh_1[i];
            count++;
        }
    }
    if (count == 0)
    {
        printf("0\nnone");
    }
    else
    {
        ans = sum / count;
        printf("%d\n", count);
        printf("%.2f", ans);
    }
}