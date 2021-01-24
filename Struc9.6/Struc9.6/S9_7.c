//
//  S9_7.c
//  Struc9.6
//
//  Created by 杨恩 on 2021/1/23.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 struct结构体
 每个学生应该包含的学号和对应的成绩
 */
struct Student{
    long num;
    float score;
    struct Student *next;
};
#include "S9_7.h"
#define LEN sizeof(struct Student)
/*
 功能：创建一个动态创建的链表
 输入：无
 输出：一个链表的头指针
 */
struct Student *create(void)
{   struct Student *head;
    struct Student *p1,*p2;
    int n=0;
    p1=p2=(struct Student*)malloc(LEN);
    //为什么不给head也分配空间//因为p1,p2是指针；
    printf("please input the member's number,score i.e 1001,98\n");
    scanf("%ld,%f",&p1->num,&p1->score);
    head=NULL;
    while(p1->num!=0){
        n=n+1;
        if(n==1) head=p1;
        else p2->next=p1;
        p2=p1;
        p1=(struct Student*)malloc(LEN);//为什么要重复给空间，而不用给p2空间。
        scanf("%ld,%f",&p1->num,&p1->score);
    }
    p2->next=NULL;
    return head;
}
/*
 功能：输出
 输入：链表头指针
 输出：无
 */
void print(struct Student *head){
    struct Student *p;
    int n=0;
    p=head;
    if(p==NULL)
        printf("输入的是空链表\n");
    while(p!=NULL){
        n++;
        p=p->next;
    }
    p=head;
    printf("\nNow, These %d records are: \n",n);
    if(head!=NULL){
        do{
            printf("%ld %2f\n",p->num,p->score);
            p=p->next;
        }while(p!=NULL);
    }
}
/*
 9.7 删除学号
 功能：删除学号
 输入：链表头指针，要删除的学号
 输出：
 */
//根据学号删除
struct Student *del(struct Student *head,long dnum){
    struct Student *pt,*pre;
    pre=head;
    pt=pre->next;
    if(head==NULL)
        printf("\n输入的是空链表\n");
    //删除第一个节点
    if(head->num==dnum){
        head=head->next;
        return head;
    }
    while(pt!=NULL&&pt->num!=dnum){
        pre=pre->next;
        pt=pre->next;
    }
    if(pt!=NULL&&pt->num==dnum){
        pre->next=pt->next;
        free(pt);
        return head;
    }
    //删除最后一个节点
    if(pt==NULL&&pt->num==dnum){
        pre->next=NULL;
    }
    return head;
}

/*
 题号：9.8
 功能：插入节点
 输入：链表直接，手动输入新插入节点的学号和成绩
 输出：新的链表
 */
struct Student *insert(struct Student *head){
    struct Student *pt,*pre;
    struct Student *person;
    pre=head;
    pt=head->next;
    person=(struct Student *)malloc(LEN);
    printf("please input the new member's number and score\n");
    scanf("%ld,%f",&person->num,&person->score);
    //如果表为空
    if(head==NULL){
        head=person;
        person->next=NULL;
    }
    //表不为空，插在第一个
    if(head->num>person->num){
        person->next=pre;
        head=person;
        return head;
    }
    //
    while(person->num>pre->num&&pt->next!=NULL){
        pre=pre->next;
        pt=pre->next;
    }
    if(pt->num>person->num&&pt->next!=NULL){
        person->next=pt;
        pre->next=person;
    }
    //插在最后一个
    else if(pt->next==NULL){
        pt->next=person;
        person->next=NULL;
    }
    return head;
}
