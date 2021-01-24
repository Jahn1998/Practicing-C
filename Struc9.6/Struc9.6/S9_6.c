//
//  S9_6.c
//  Struc9.6
//
//  Created by 杨恩 on 2021/1/23.
//13个人围成一圈，从第1个人开始顺序报号1,2,3.凡报到3者退出圈子。找出最后留在圈子中的人原来的序号。用链表处理

#include "S9_6.h"
#define N 13
struct Person{
    int num;
    int next;
}Link[N+1];

int Tsix()
{
    printf("题目：13个人围成一圈，从第1个人开始顺序报号1,2,3.凡报到3者退出圈子。找出最后留在圈子中的人原来的序号。用链表处理");
    printf("\n");
    int i=0,j=0,h=N;
    for(i=1;i<=N;i++){
        Link[i].num=i;
        if(i==N)
            Link[i].next=1;
        else
            Link[i].next=i+1;
    }//赋值
    printf("The sequence of person that leaves the circle\n");
    for(i=1;i<=N-1;i++){
        j=0;
        while(j!=3){
            h=Link[h].next;
            if(Link[h].num)
                j++;
        }
        printf("%d ",Link[h].num);
        Link[h].num=0;
    }
    printf("The last one is \n");
    for(i=1;i<=N;i++){
        if(Link[i].num)
            printf(" %d ",Link[i].num);
    }
    printf("\n");
    return 0;
}
