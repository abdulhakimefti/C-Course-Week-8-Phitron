#include<stdio.h>
int main (){
    char arr[]="Abdul Hakim";
    for(int i =0; i<sizeof(arr)/sizeof(arr[i]);i++){
        printf("%c ",arr[i]);
    }
}