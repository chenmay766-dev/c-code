
#include<stdio.h>
int fac(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }
    int ret = n * fac(n-1);
    return ret;
}
int Sum(int n)
{
    if(n == 1)
    {
        return 1;
    }
    int ret1 = n + Sum(n-1);
    return ret1;
}
int feibonq(int n)
{
    if(n == 1 || n == 2)
    {
        return 1;
    }
    return feibonq(n-1) + feibonq(n-2);
}
int main()
{
    int res1 = feibonq(5 );
    int res = Sum(100);
    int result = fac(4);//正数型，最多能计算12的阶乘，long long 则最多可计算到20的阶乘
    printf("%d %d\n", result,res);
    printf("%d\n", res1);
    return 0 ;
} 
