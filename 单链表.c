#include<stdlib.h>
/*标准库，它提供很多常用功能，例如：
malloc() —— 动态申请内存
free() —— 释放内存
realloc() —— 重新分配内存
exit() —— 退出程序
rand() —— 产生随机数*/
#include <stdbool.h>
#include <stdio.h> //引入输入输出功能

typedef struct LNode{
    int data;
    struct LNode *next ;
}LNode , *Linklist;

//初始化单链表（带头节点）
bool Initlist(Linklist *L){
    *L = (LNode *)malloc(sizeof(LNode));
    if(*L==NULL){
        return false;
    }
    (*L)->next = NULL;
    return true;
}


void test(){
    Linklist L;
    Initlist(&L);
}

int main(){
    test();
    return 0;
}