#include<stdio.h>

void main (){
    int i,in,t,c = 0;
    scanf("%d",&in);
    int ans[in];
    for( i = 1 ; i <= in ; i++){
        scanf("%d",&ans[i]);
    }
    scanf("%d",&t);
    for ( i = 1; i <= in; i++)
    {
        if(ans[i] == t){
            printf("%d ",i);
            c++;
        }
    }
    if (c==0){
        printf("0");
    }
    
}