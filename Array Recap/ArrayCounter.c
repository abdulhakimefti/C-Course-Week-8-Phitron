#include<stdio.h>
int main (){
    int n ;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    int count =0;
    for(int i =0;i<n;i++){
        int val = arr[i];
        if(val==2){
            count++;
        }
    }
    printf("%d\n",count);
}