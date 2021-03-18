//
//  creatLink.c
//  Niucode
//
//  Created by 杨恩 on 2021/1/30.
//
struct ListNode {
    int val;
    struct ListNode *next;
};
#include "creatLink.h"
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
