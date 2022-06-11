// #include<stdio.h>
// int main (){
//     int t;
//     scanf("%d",&t);
    
//     for(int i =0;i<t;i++){
//         char tele[11];
//         int n;
//         scanf("%d",&n);
//         char number[n];
//         scanf("%s",&number);
//         int k=0;
//         for(int j=0;j<n;j++){
//             if(number[j]=='8'){
//                 tele[k] = number[j];
//                 k++;
//                 break;
//             }
//         }
//         printf("%c\n",tele[0]);
//     }
    
// }
#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d",&n);
    int z;
    for(int i=0;i<n;i++){
        scanf("%d",&z);
        int u=0;
        char str[z];
        scanf("%s",str);
        int len=strlen(str);
        for(int j=0;j<len;j++){
            if(str[j]=='8'){
                u =len-j;
                break;
            }
        }
    if(u>=11){
        printf("YES\n"); 
    }
    else{
        printf("NO\n");
    }

    }
    return 0;
}