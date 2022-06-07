#include <stdio.h>
int main()
{
    // Sum
    int sum;
    int arr[6] = {2, 1, 0, -5, 10, 5};
    for (int i = 0; i < 6; i++)
    {
        sum += arr[i];
    }
    // printf("%d\n",sum);

    // Maximum Value
    int max = arr[0];
    for (int i = 1; i < 6; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    // printf("%d\n", max);

    // Minimum value
    int min = arr[0];
    for (int i = 1; i < 6; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    // printf("%d\n", min);

    //Reverse 
    for(int i =5;i>0;i--){
        printf("%d \n",arr[i]);
    }
}