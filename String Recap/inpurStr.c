#include<stdio.h>
int main (){
    char arr[10];
    // scanf("%s",&arr);
    // gets(arr);
    fgets(arr,10,stdin);
    printf("%s\n",arr);
}