#include<stdio.h>

void main (){
    int input,count = 0,ans[20000];
    
    while(1){
        
        scanf("%d",&input);
        if(input == 0){
            break;
        }
        ans[count] = 1;
        count++;
    }

    for( int i = 0 ; i < 20000; i++){
        for(int j = 0 ; j < 20000 ; j++ ){
            if(ans[i] == ans[j]){
                ans[i] = 0 ; 
            }
        }
    }
    for(int i = 0 ; i < 20000 ; i++){
        if(ans[i] == 1){
            printf("%d",i);
        }
    }
    
}