#include<stdio.h>
// int main()
// {
//     int a = 1;
//     while (a < 11)
//     {
//         printf("%d\n", a); 
//         a++ ;
//     }
//     return 0 ;
// }


// int main()
// {
//     int count = 11 ;
//     for (int  i = 1; i < count; i++)
//     {
//         printf("%d\n",i);

//     }
//     return 0 ;    
// } 
 

//1-100 2的倍数的数字之和
// int main()
// {
//     int sum = 0 ;
//     for(int i = 1 ; i <= 100 ; i++) 
//     {
//         if(i % 2 == 0)
//         {
//             sum += i ;
//         }
//     }
//     printf("%d\n", sum);
//     return 0 ;
// }





//最大公约数
// int main()
// {
//     int a ,b ;
//     scanf("%d", &a);
//     scanf("%d", &b);
//     int c = a % b;

//     while (c != 0)
//     {
//         a = b;
//         b = c;
//         c = a % b;
//     }
//     printf("%d\n",b);
//     return 0 ;

// }
//最小公倍数
int main()
{
    int a ,b ;
    scanf("%d", &a);
    scanf("%d", &b);
    int c = a % b;
    int original_a = a;
    int original_b = b;
    while (c != 0)
    {
        a = b;
        b = c;
        c = a % b;
    }
    int a1 = original_a / b;
    int b1 = original_b / b;
    int lcm = a1 * b1 * b;
    printf("%d\n",lcm);
    return 0 ;
}