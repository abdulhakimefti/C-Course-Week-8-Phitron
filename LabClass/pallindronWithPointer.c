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
    char a[100];
    fgets(a,100,stdin);
    int i =0,j=strlen(a)-2;

    bool pallindron= true;
    while(i<j){
        if(a[i]!=a[j]){
           
            pallindron = false;
            break;
        }
        i++;
        j--;
    }
      if(pallindron){
        printf("Yes, It is Pallindron\n");
    }
    else{
        printf("No, It is not Pallindron\n");
    }

}