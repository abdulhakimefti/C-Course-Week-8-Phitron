// #include<stdio.h>
// #include<string.h>
// int main (){
//     char str[101];
//     fgets(str,101,stdin);
//     int len = strlen(str);
//       if(str[0]>='a'&& str[0]<='z'){
//           str[0]=str[0]-32;
//       }
//       int i =1;
//     for(;i<len-1;i++){
//       if(str[i]>='A'&& str[i]<='Z'){
//           str[i]=str[i]+32;
//       }
//     }
//     str[i]='\0';
//     printf("%s\n",str);
// }
#include<stdio.h>
#include<string.h>
int main()
{
    char a[105],l,*s=a+1;
    for(gets(a);*s;)l|=*s++>96;
    for(s=a;*s;)*s++^=!l*32;
    puts(a);

}