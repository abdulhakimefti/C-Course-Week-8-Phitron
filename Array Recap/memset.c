#include<stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    int arr[n];

    memset(arr,1,sizeof(arr));
    for(int i =0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

//memset(arrayName,value,arrayMemorySize); It will give same value to all.
