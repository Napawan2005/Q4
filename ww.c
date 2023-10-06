#include<stdio.h>

void main (){
    int loop,t,sum1 = 0 , sum2 = 0 ;
    scanf("%d",&loop);
    int ans[loop];
    for(int i = 0 ; i< loop ; i++){
        scanf("%d",&ans[i]);
    }
    scanf("%d",&t);
    for(int i = 0 ; i < loop ; i++){
        if(ans[i]> t){
            sum1 += ans[i];
        }
        if(ans[i] < t){
            sum2 += ans[i];
        }
    }
    if(sum1 > sum2){
        printf("%d",sum1);
    }else{
        printf("%d",sum2);
    }
}