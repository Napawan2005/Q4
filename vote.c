#include<stdio.h>
#include<limits.h>
void main (){
    int people,s,ans = 0,max =INT_MIN;
    scanf("%d %d",&people,&s);
    int nu[people],sro[s],c[people];
    for(int i = 1 ; i<= people ; i++){
        nu[i] = i;
        
        c[i] = 0;
    }
    for(int i = 1 ; i <= s ;i++){
        scanf("%d",&sro[i]);
        for(int j = 1 ; j <= people ;j++){
            if(sro[i] == nu[j]){
                c[j]++;
                
                if(c[j]>max){
                    max = c[j];
                    ans = nu[j];
                }
            }
            
        }
    }

    printf("%d\n%d",ans,max);



}