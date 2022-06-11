#include<stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0,j=n-1;i<j;i++,j--){
        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
    }
    for(int i =0;i<n;i++){
        printf("%d ",arr[i]);
    }
}