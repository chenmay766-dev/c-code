#include<stdio.h>
// int fac(int n )//形参
// {
//     int ret = 1;
//     for(int i = 1;i <= n;i++)
//     {
//         ret *= i;
//     }
//     return ret;
// } 
// int main()
// {
//     int a = 4;//实参
//     int b = fac(a);
//     printf("%d\n",b);
//     return 0 ;
// } 

void Printf(int arr[],int len)//void：当它放在一个函数名字的最前面（作为返回值类型）时，它代表：这个函数只负责执行一些操作，不需要给调用它的人返回任何计算结果（没有返回值）。
{
     for(int i = 0; i<len ; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void Reverse(int arr[],int len)
{
    int i = 0;
    int j = len - 1;
    while(i < j)
    {
        int tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
        i++;
        j--;
    }
    printf("\n");

}




int main()
{
    int arr[5] = {1,2,3,4,5};
    int len = sizeof(arr)/sizeof(arr[0]);
    Printf(arr,len);
    Reverse(arr,len);
    Printf(arr,len);
    return 0 ;
}



