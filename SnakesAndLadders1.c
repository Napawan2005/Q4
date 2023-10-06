#include<stdio.h>

void main (){
   int nStep, num;
   scanf("%d",&nStep);
   printf("A ");
   for(int i = 0 ; i < nStep ; i++){
      printf("0 ");
   }
   printf("\n");
   int sum = 0 ;
   while(1){
      scanf("%d",&num);
      sum += num;

      if(sum > nStep){
         sum = nStep;
      }
      printf("X ");
      for(int i = 1 ; i <= nStep ; i++){
         if(i == sum){
            printf("A ");
         }else{
            printf("0 ");
         }
      }
      printf("\n");
      if(sum >= nStep ){
         break;
      }
   }
}