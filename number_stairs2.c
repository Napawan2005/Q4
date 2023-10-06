#include <stdio.h>

void main()
{
    int input, count = 1, number[501] , nu = 0 ;
    while (1)
    {
        scanf("%d", &number[count]);
        
        if(number[count] < 0 || number[count] > 9){
            break;
        }

        printf("%d\n", count);
        count++;
    }
    int copy = count-1;
    printf("%d\n",number[count]);
    for(int i = 1 ; i < count ; i++){
        for(int j = 0 ; j < count ; j++){
            if(j < copy ){
                printf(" ");

            }else{
                printf("%d",number[i]);
            }
            
        }
        copy--;
        printf("\n");
    }
}