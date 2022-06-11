#include<stdio.h>
#include<string.h>
int main (){
    char str[100];
    fgets(str,100,stdin);
    int len = strlen(str);
   int counter=0;
   int a;
    for(int i = 0;i<len;i++){
        
        if(str[i]==a){
            counter++;
            if(counter>=7){
                break;
            }
        }
        else{
            a = str[i];
            counter=1;
        }
    }
    if(counter>=7){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}