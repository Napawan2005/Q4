#include<stdio.h>

void main (){
    int N , ans[10000],in,i;
    for(i = 1 ; i <= 10000 ; i++){
        ans[i] = 0;
        
    }
    scanf("%d",&N);
    for( i = 0 ; i < N ;i++){
        scanf("%d",&in);
        ans[in]++;
       
    }
    for( i = 1 ; i <= 10000 ; i++){
        if(ans[i] > 0){
            printf("%d ",i);
        }
    }
}