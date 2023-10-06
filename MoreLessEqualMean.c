#include<stdio.h>

void main (){
    int loop,sum = 0 ,more = 0,little = 0,equal = 0;
    scanf("%d",&loop);
    int nu[loop];
    for(int i = 0 ; i< loop ; i++){
        scanf("%d",&nu[i]);
        sum += nu[i];
    }
    int divide= sum / loop;
    for(int i = 0 ; i < loop ; i++ ){
        if(divide < nu[i]){
            more++;
        }
        else if(divide == nu[i]){
            equal++;
        }
        else{
            little++;
        }
    }
    printf("%d\n%d %d %d",divide,more,little,equal);
}