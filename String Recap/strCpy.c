#include<stdio.h>
#include<string.h>
int main (){
    char name[] = "Abdul Hakim";
    char copyName[strlen(name)];
    strcpy(copyName,name);
    printf("%s\n",copyName);
}