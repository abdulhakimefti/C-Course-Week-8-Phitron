#include <stdio.h>
#include <string.h>
#include <sys/types.h>
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
int main()
{
    char a[100], b[100], jogfol[101];
    scanf("%s %s", &a, &b);
    strrev(a);
    strrev(b);
    int i = 0, j = 0, k = 0, hand = 0;
    while ((i < strlen(a)) && (i < strlen(b)))
    {
        int sum = (a[i] - '0') + (b[j] - '0');
        jogfol[k] = sum % 10 + '0';
        hand = sum / 10;
        i++;
        j++;
        k++;
    }
    while (i < strlen(a))
    {
        int sum = (a[i] - '0') + hand;
        jogfol[k] = sum % 10 + '0';
        hand = sum / 10;
        i++;
        k++;
    }
    while (j < strlen(a))
    {
        int sum = (b[j] - '0') + hand;
        jogfol[k] = sum % 10 + '0';
        hand = sum / 10;
        j++;
        k++;
    }
    if(hand>0){
        jogfol[k]=hand + '0';
    }
    strrev(jogfol);
    printf("%s\n", jogfol);
}