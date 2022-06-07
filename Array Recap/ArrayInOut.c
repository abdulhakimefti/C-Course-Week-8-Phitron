#include <stdio.h>
int main()
{
    int arr[1000];
    for (int i = 0; i < 1000; i++)
    {
        arr[i] = i * i;
    }
    for (int i = 0; i < 1000; i++)
    {
        // printf("%d ",arr[i]);
    }
    int arb[10] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    printf("%d\n", arr[4]);
}

// Data Type Name[size];
// Data Type Name[5] ={1,2,3,4,5};
//arr[position] = value;
// arr[10] = {0}; All value 0;
//arr[10] = {1}; arr[i] is 1,other are 0;

