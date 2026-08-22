#include<stdio.h>
int main()
{
    int arr1[2][3] = {{1,2,3},{2}};
    //打印二维数组就要分别遍历行与列，再进行读取

    // 外层循环控制行数（i 从 0 到 1）
    for (int i = 0; i < 2; i++) 
    {
        // 内层循环控制列数（j 从 0 到 2）
        for (int j = 0; j < 3; j++) 
        {
            // 打印当前行、当前列的元素，后面加个空格隔开
            printf("%d ", arr1[i][j]); 
        }
        
        // 打印完一行后，换行
        printf("\n"); 
    }

    return 0;
}
