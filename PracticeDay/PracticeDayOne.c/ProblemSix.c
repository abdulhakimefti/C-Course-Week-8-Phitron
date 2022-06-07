#include<stdio.h>
#include<string.h>
int main (){
    char mem[]="Phitron Member ";
    char name[100];
    scanf("%s",&name);
    strcat(mem,name);
    puts(mem);

}