#include<stdio.h>

void main (){
    int loop,t;
    scanf("%d",&loop);
    int ans[loop];
    for(int i = 0; i < loop ; i++){
        scanf("%d",&ans[i]);
    }
    scanf("%d",&t);
     for(int i = 0; i < loop ; i++){
        if(i % t == 0 ){
            printf("%d ",ans[i]);
        }
     } 
}