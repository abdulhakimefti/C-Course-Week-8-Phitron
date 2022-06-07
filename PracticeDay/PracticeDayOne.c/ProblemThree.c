//Print even index of array  of 1
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i+1]);
    }
    for(int i = 2;i<n;i=i+2){
        printf("%d ",arr[i]);
    }
}