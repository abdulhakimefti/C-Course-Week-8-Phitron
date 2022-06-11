#include<stdio.h>
#include <string.h>
#include <sys/types.h>
#include<stdbool.h>
void strrev(unsigned char *str)
{
    int i;
    int j;
    unsigned char a;
    unsigned len = strlen((const char *)str);
    for (i = 0, j = len - 1; i < j; i++, j--)
    {
        a = str[i];
        str[i] = str[j];
        str[j] = a;
    }
}
int main (){
    char a[100],b[100];
    scanf("%s",&a);
    strcpy(b,a);
    strrev(b);
    bool pallindron = true;
    for(int i =0;i<strlen(a);i++){
        if(a[i]!=b[i]){
            pallindron = false;break;
        }
    }
    if(pallindron){
        printf("Yes, It is Pallindron\n");
    }
    else{
        printf("No, It is not Pallindron\n");
    }
}