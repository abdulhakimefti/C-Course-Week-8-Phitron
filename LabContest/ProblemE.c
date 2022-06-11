#include<stdio.h>
int main (){
    char num[6];
    fgets(num,6,stdin);
    int purno[5];
    for(int i=0;i<5;i++)
    {
        int temp = num[i] - '0';
        purno[i]=temp;
    }
    int sum=0;
   
    for(int i =0;i<5;i++){
        sum+=purno[i];
    }
    printf("%d\n",sum);

}