#include<stdio.h>
#include<string.h>
int main (){
    char str[1000];
    scanf("%s",&str);
    int count =0;
    while (str[count] != '\0'){
        count++;
    }
    printf("length check system 1 = %d\n",count);


    int arr[] ={1,2,3,4,5,6};
    int len = sizeof(arr)/sizeof(arr[0]);
    printf("length check system 2 = %d\n",len);
    int funcLen = strlen(arr);
    printf("length check system 1 = %d\n",funcLen);
}