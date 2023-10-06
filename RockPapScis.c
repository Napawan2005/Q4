#include<stdio.h>


void main (){
   int nu[2];
   scanf("%d %d",&nu[0],&nu[1]);
   if( nu[0] ==2 && nu[1]==1 || nu[0]==1&&nu[1]==3 || nu[0]== 3 &&nu[1]== 2){
        printf("1");
    }else if(nu[0]==nu[1]){
        printf("0");
    }else{
        printf("2");
    }

   
}