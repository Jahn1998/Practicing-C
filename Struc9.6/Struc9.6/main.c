//
//  main.c
//  Struc9.6
//
/**
 S9_6 13个人围成一圈，从第1个人开始顺序报号1,2,3.凡报到3者退出圈子。找出最后留在圈子中的人原来的序号。用链表处理
 S9_7
 create
 insert
 delete
 print
 S9_10
 comb:合并两个表，并排序
 Ndel:把a链表中与b链表相同的节点，删除（BUG：无法删除重复的节点）
 */
/*
1998,89
1003,43
1001,67.5
1781,90
1001,32
0,0

1001,67.5
1003,43
1998,89
1003,43
1003,43
1001,67.5
0,0
 */
//
//  Created by 杨恩 on 2021/1/23.
//

#include <stdio.h>
#include "S9_6.h"
#include "S9_8.h"
#include "S9_7.h"
#include "S9_10.h"
int main(){
    struct Student *pt,*a,*b;
    //Tsix();//9.6
    /*
    pt=create();//9.7
    print(pt);
    pt=del(pt,1003);
    print(pt);
    pt=insert(pt);
    print(pt);
     
    pt=comb();
    print(pt);
    
     a=create();
     Numdelet(a,1002);
     print(a);
     
   
     */
    a=create();
    b=a;
    int i=0;
    while(b!=NULL){
        i++;
        ;
    }
    int num[i]={-1};
    printf("%d",num[i]){
        
    }
    //b=create();
    //pt=Ndelet(a,b);
    //print(pt);
    //printf("hello");
}
