// #include<stdio.h>
// #include<string.h>
// int main (){
//     int n;
//     scanf("%d",&n);
//     char str[n];
//     scanf("%s",&str);
//     int sz = n/3 + 5;
//     int arr[sz];
//     int j =0;
//     for(int i=0;i<n;i++){
//         if(str[i]=='n'){
//             arr[j] = 1;
//             j++;
//         }
//     }
//     for(int i=0;i<n;i++){
//         if(str[i]=='z'){
//             arr[j] = 0;
//             j++;
//         }
//     }
//     arr[j]=2;
//     int counter=0;
//     for(int i =0;i<100;i++){
//         if(arr[i]==2){
//             break;
//         } 
//             counter++; 
//     }
    
//     for(int i =0;i<counter;i++){
//         printf("%d ",arr[i]);
//     }
// }

#include<stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    char str[a];
    int zero=0,one=0;
    scanf("%s",str);
    str[strlen(str)]='\0';
    for(int i=0;i<a;i++){
        if(str[i]=='n'){
            one++;
        }
        else if(str[i]=='z'){
           zero++;
        }
    }
    for(int i=0;i<one;i++){
        printf("1 ");
    }
    for(int i=0;i<zero;i++){
        printf("0 ");
    }

    return 0;
}