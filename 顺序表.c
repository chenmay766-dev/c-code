#include<stdlib.h>
#include <stdbool.h>
#include <stdio.h> 
#define InitSize 10
typedef struct{
    int *data;
    int MaxSize;
    int Length;
}SeqList;

//初始化顺序表
void Initlist(SeqList *L){
    (*L).data = (int * )malloc(InitSize*sizeof(int));
    (*L).Length = 0;
    (*L).MaxSize = InitSize;
}

//增加顺序表长
void IncreaseSize(SeqList *L, int len){
    int *p = (*L).data;
    (*L).data = (int *)malloc(((*L).MaxSize+len)*sizeof(int));
    for(int i=0 ; i < (*L).Length ; i++){
        (*L).data[i] = p[i];
    }
    (*L).MaxSize = (*L).MaxSize + len;
    free(p);
}

//给顺序表插入元素的函数
bool ListInsert(SeqList *L , int i , int e){
    if(i<1||i>(*L).Length+1){
        return false;
    }
    if ((*L).Length>=(*L).MaxSize)
    {
        return false;
    }
    
    for(int j = (*L).Length; j>=i;j--){
        (*L).data[j]= (*L).data[j-1];
    }
    (*L).data[i-1] = e;
    (*L).Length++;
    return true;
}

//删除元素
bool ListDelete(SeqList *L , int i , int *e){
    if(i<1||i>(*L).Length){
        return false;
    }
    *e = (*L).data[i-1];
    for(int j=i; j<(*L).Length;j++){
        (*L).data[j-1] = (*L).data[j];
    }
    (*L).Length--;
    return true;
}

//按位查找
int GetElem(SeqList *L , int i){
    return L->data[i-1];
}

//按值查找
int LocateElem(SeqList *L , int e){
    for(int i = 0 ;i< L->Length ;i++){
        if(L->data[i]== e){
            return i+1;
        }
    }
    return 0;
}

int main(){
    SeqList L;
    Initlist(&L);
    printf("初始化成功\n");
    ListInsert(&L,3,3);
    ListInsert(&L,3,5);
    printf("插入成功\n");
    IncreaseSize(&L , 5);
    return 0 ;
}