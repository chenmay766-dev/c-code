#include<stdio.h>
int g = 100 ;
int main()
{
    //printf("ChangeWorld");
    //printf("%c\n",'a');
    //printf("%c",'s');
    // char str[] = "abcdef";
    // printf("%s\n",str);
    // printf("%c\n",65);
    // printf("%c\n",97);
    char h = 'a' ;//有符号
    signed char k = 's' ;//有符号：负数 0 正数
    unsigned  char l = 'e' ;//无符号 ：0 正数
    printf("%d\n", g);
    printf("%lu\n", sizeof(g));
    printf("%lu\n", sizeof(int));
    return 0;
} 
