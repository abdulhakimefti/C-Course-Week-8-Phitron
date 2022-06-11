#include <stdio.h>
#include<stdbool.h>
int main()
{
    int level;
    scanf("%d",&level);
    int xCanPass;
    scanf("%d",&xCanPass);
    int xCanPassLevel[xCanPass];
    for(int i =0;i<xCanPass;i++){
        scanf("%d",&xCanPassLevel[i]);
    }
    int yCanPass;
    scanf("%d",&yCanPass);
    int yCanPassLevel[yCanPass];
     for(int i =0;i<yCanPass;i++){
        scanf("%d",&yCanPassLevel[i]);
    }
    int totalLevel[level];
    for(int n=0;n<level;n++){
        totalLevel[n]=0;
    }
    int i =0;
    int j =0;
    int k =0;
    bool ck = true;
    while(j<xCanPass){
        totalLevel[xCanPassLevel[j]-1] = 1;
        j++;
    }
    while(k<yCanPass){
        totalLevel[yCanPassLevel[k]-1] =1;
        k++;  
    }
    for(int n =0;n<level;n++){
        if(totalLevel[n]==0){
            ck = false;
            break;
        }
    }
    if(ck){
        printf("I become the guy.\n");
    }
    else{
         printf("Oh, my keyboard!\n");
    }
}