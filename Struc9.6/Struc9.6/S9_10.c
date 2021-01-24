//
//  S9_10.c
//  Struc9.6
//
//  Created by 杨恩 on 2021/1/23.
//习题 9.10 已有a，b两个链表，每个链表中的结点包括学号、成绩。要求把两个链表合并，按学号升序排列
//有两个链表a,b，设结点中包含学号姓名。从a链表中删去与b链表中有相同学号的结点


#include "S9_10.h"
#include "S9_7.h"
#define LEN sizeof(struct Student)

struct Student{
    long num;
    float score;
    struct Student *next;
};
/*
 习题 9.10 已有a，b两个链表，每个链表中的结点包括学号、成绩。要求把两个链表合并，按学号升序排列
 */
struct Student *comb(){
    struct Student *ah,*bh;
    struct Student *pa,*pb;
    struct Student *t;
    ah=create();
    printf("\n");
    bh=create();
    t=(struct Student *)malloc(LEN);
    pa=ah;
    pb=bh;
    //a+b
    while((pa->next)!=NULL){
        pa=pa->next;
    }
    pa->next=pb;
    print(ah);
    for(pa=ah;pa!=NULL;pa=pa->next){
        for(pb=pa->next;pb!=NULL;pb=pb->next){
            if(pa->num>pb->num){
                t->num=pb->num;
                pb->num=pa->num;
                pa->num=t->num;
                t->score=pb->score;
                pb->score=pa->score;
                pa->score=t->score;
            }
        }
    }
    return ah;
}
/*
 9.11 有两个链表a,b，设结点中包含学号姓名。从a链表中删去与b链表中有相同学号的结点
 输入：给定两个链表
 输出：被删除指定节点的链表
 */
struct Student *Ndelet(struct Student *a,struct Student *b){
    struct Student *pa,*pb,*t;
    pa=a;
    pb=b;
    //删除第一个
    for(pb=b;pb!=NULL;pb=pb->next){
        if(pa->num==pb->num){
            a=pa->next;
            pa=a->next;
            }
    }
    //print(a);
    //删除之后的
    for(pa=a;pa!=NULL;pa=pa->next){
        t=pa->next;
        if(t!=NULL){
            for(pb=b;pb!=NULL;pb=pb->next){
                if((t!=NULL)&&(t->num)==(pb->num)){
                    pa->next=t->next;
                    break;
                }
            }
            print(a);
        }else
            printf("/nfinish/n");
    }
    return a;
}
/*
 删除相同的学号
 */
struct Student *Numdelet(struct Student *a,int num){
    struct Student *p,*pre;
    pre=a;
    p=pre->next;
    //删除第一个
    if(num==pre->num){
        a=a->next;
    }
    //删除之后的
    while(num!=p->num&&p!=NULL){
        pre=pre->next;
        p=pre->next;
    }
    if(num==p->num){
        pre->next=p->next;
        free(p);
    }
    return a;
}
