#include<stdio.h>
// int main()
// {
//     int n = 0x11223344;
//     int *p = &n;
//     printf("%x\n",*p);
//     printf("%p\n",p);
//     printf("%p\n",&n);
//     return 0;

// }
// void swap(int x, int y)
// {
//     int tmp = x;
//     x = y;
//     y = tmp;
// }
// void swap1(int *pa , int *pb)
// {
//     int tmp = *pa;
//     *pa = *pb;
//     *pb = tmp;
// }
// int main()
// {
//     int a = 10;
//     int b = 20;
//     printf("%d,%d\n",a,b);//a = 10 , b = 20
//     swap(a,b);

//     printf("%d,%d\n",a,b);//a = 10 , b = 20
//     swap1(&a,&b);
//     printf("%d %d\n", a , b);// a = 20 , b = 10
//     return 0 ;
// }

 

// int main()
// {
//     int arr[] = {1,2,3,4,5};
//     short *p  = (short*)arr;
//     int i ;
//     for(i = 0; i < 4 ; i++)
//     {
//         *(p + i ) = 0;
//     }
//     for(i= 0 ; i < 5; i++)
//     {
//         printf("%d \n" , arr[i]);
//     }
//     return 0 ;
// }



//用指针地址遍历出数组：
// void print_arr(int *p , int len )
// {   
//     for(int i = 0 ; i < len ; i++)
//     {
//         printf("%d ", p[i]);
//     }
//     printf("\n");
// }
// int main()
// {
//     int arr[] =  {1,2,3,4,5};
//     int len  = sizeof(arr)/ sizeof(arr[0]);
//     print_arr(arr , len );
//     return 0 ;
// }


int main()
{
    int a = 10;
    int *p = &a;
    printf("%d \n", *p);
    printf("=============================\n");
    int **p1 = &p;
    printf("%p\n", *p1);
    printf("%p \n", p);
    printf("===================== \n");
    printf("%d \n", **p1); 
    return 0 ;
}