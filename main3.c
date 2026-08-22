#include<stdio.h>
// int main()
// {
//     // int a;
//     // int b;
//     // int c;
//     // int re = scanf("%d %d %d",&a,&b,&c) ;
//     // printf("a=%d b=%d c=%d\n", a, b , c) ;
//     // printf("re = %d\n",re);//返回个数
//     // return 0 ;

//     int a = 10;
//     int b = a << 1 ;//左移：相当于乘法10*2的n（1）次方
//     int c = a >>1 ;//右移：相当于除法10/2的n（1）次方(正数 )
//     printf("%d\n",a);
//     printf("%d\n",b);
//     printf("c = %d\n",c) ;
//     return 0 ;


// }
//判断闰年
int main()
{
    int year ;
    scanf("%d",&year);

    if((year % 4 == 0 && year % 100 != 0)|| year % 400 == 0)
    {
        printf("是闰年\n");

    }
    else
    {
        printf("不是闰年\n");
    }
    return 0 ;
}