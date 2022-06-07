#include <stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%s",&str);
    int len =strlen(str);
    
    int arr[len];
    int j=0;
    for(int i =0;i<len;i++){
        if(str[i]=='a'||str[i]=='i'||str[i]=='e'||str[i]=='o'||str[i]=='u'){
            arr[j] = i;
            j++;
        }
    }
    for(int i =0;i<j;i++){
        printf("%d ",arr[i]);
    }

}