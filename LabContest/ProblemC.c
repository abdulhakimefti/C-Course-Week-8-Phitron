#include<stdio.h>
#include<string.h>
int main (){
    char str[1000];
    fgets(str,1000,stdin);
    int len = strlen(str);
    int freq[10]={0};
    for(int i =0;i<len;i++){
        for(int j=0;j<len;j++){
            if(str[j]==(i+'0')){
                freq[i]++;
            }
        }
    }
    for(int i =0;i<10;i++){
        printf("%d ",freq[i]);
    }
}