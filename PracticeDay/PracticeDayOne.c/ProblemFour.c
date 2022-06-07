#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int revArr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = n-1,j=0;i>=0;i--,j++){
        revArr[j] = arr[j]-arr[i];
        if(revArr[j]<0){
            revArr[j] = revArr[j] * -1;
        }
    }
    for(int i =0;i<n;i++){
        printf("%d ",revArr[i]);
    }
}