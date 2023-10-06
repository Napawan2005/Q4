#include <stdio.h>

void main()
{
    int a[100];
    int b[100];
    for (int i = 0; i < 100; i++)
    {
        a[i] = 0;
        b[i] = 0;
    }
    int input;
    while (1)
    {
        scanf("%d", &input);

        if (input < 0)
        {
            break;
        }
        a[input] = 1;
    }
    while (1)
    {
        scanf("%d", &input);
        if (input < 0)
        {
            break;
        }
        b[input] = 1;
    }
    int check = 0;
    int c1 = 0, c2 = 0;

    for (int i = 0; i < 100; i++)
    {
        if (a[i] == 1)
        {
            c1++;
        }
        if (b[i] == 1)
        {
            c2++;
        }
        if (a[i] != b[i])
        {
            check = 1;
        }
    }
    if (check == 0)
    {
        printf("A and B are anagrams\n");
    }
    else
    {
        printf("A and B are not anagrams\n");
    }
    printf("A %d\nB %d",c1, c2);
}