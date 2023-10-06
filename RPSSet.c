#include<stdio.h>

void main (){
    int loop,sumx = 0,sumy = 0;
    scanf("%d",&loop);
    int x[loop],y[loop];
    

    for(int i = 0 ; i < loop ; i++){
        scanf("%d",&x[i]);
    }
    
    for(int i = 0 ; i< loop ; i++){
        scanf("%d",&y[i]);
    }

    for(int i = 0 ; i < loop ; i++){
        if(x[i] > y[i]&&x[i] == 2 && y[i] == 1 || x[i] == 3 && y[i] == 2||x[i] == 1 && y[i] == 3 ){
            sumx += 1;

        }else if (y[i] == x[i]){
            sumy += 0;
            sumx += 0;
        }else{
            sumy += 1;
        }
    }
    printf("%d %d",sumx,sumy);
    printf("\n");
    if(sumx > sumy){
        printf("1");
    }else if(sumy > sumx){
        printf("2");
    }else{
        printf("0");
    }
      
   
}