#include<stdio.h>

void main (){
    int loop;
    scanf("%d",&loop);
    int nu[loop];
    for(int i = 0 ; i < loop ; i++){
        scanf("%d",&nu[i]);
    }
    int t;
    scanf("%d",&t);
    if(t < 0){
        for(int i = loop - 1 ; i >= 0 ; i--){
            printf("%d ",nu[i] + t);
        }
    }else{
        for(int  i = 0 ; i < loop ; i++ ){
            printf("%d ",nu[i] + t);
        }
    }
}