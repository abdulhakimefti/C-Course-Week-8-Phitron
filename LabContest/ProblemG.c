// #include<stdio.h>
// #include<string.h>

// int main (){
//     char str[1000];
//     scanf("%s",str);
//     int len = strlen(str);
//     char temp[]="heidi";
//     int counter =0;
//     int j=0;
//     // printf("%c",temp[0]);
    
//    printf("%d\n",counter);
// }

#include<stdio.h>
#include<string.h>

int main()
{
    char vl[1001];
    scanf("%s",vl);
    char vl2[6]="heidi";
    vl2[strlen(vl2)]='\0';
    vl[strlen(vl)]='\0';
    int j=0;
    for(int i=0;i<strlen(vl);i++){
        if(vl[i]==vl2[j]){
            j++;
            if(j==5){
                printf("YES");
                return 0;
            }
        }
    }
    printf("NO"); 


    return 0;
}