    #include<stdio.h>
    int main (){
        int n;
        scanf("%d",&n);
        int arr[n];
        int sum;
        for(int i =0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        for(int i =0;i<n;i++){
            sum+=arr[i];
        }
        printf("%d\n",sum);
    }