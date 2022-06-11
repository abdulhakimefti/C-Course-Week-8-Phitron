#include<stdio.h>
#include<string.h>
int main (){
    char word [100];
    fgets(word,100,stdin);
    int counter[26] ={0};
    int len = strlen(word);
    for(int i =0;i<len;i++){
        for(int j =0;j<26;i++){
            if(word[i]>='A' || word[i]<= 'Z'||word[i]>='a'||word[i]<='z'){
                counter[j]=1;
            }
        }
    }
    for(int i =0;i<26;i++){
        if(counter[i]!=0){
            printf("NO\n");break;
        }
        else{
            printf("Yes\n");
        }
    }
}