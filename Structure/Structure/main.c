//
//  main.c
//  Structure
//
//  Created by 杨恩 on 2021/1/22.
//

#include <stdio.h>
#include <stdlib.h>
#define LEN sizeof(struct Student)
struct Student
{
    long num;
    float score;
    struct Student *next;
};
int n;
struct Student *create(void){
    struct Student *head;
    struct Student *p1,*p2;
    n=0;
    //为什么不给head也动态开拓一个malloc
    p1=p2=(struct Student*)malloc(LEN);
    scanf("%ld,%f",&p1->num,&p1->score);
    head=NULL;
    while(p1->num!=0){
        n=n+1;
        if(n==1) head=p1;
        else p2->next=p1;
        p2=p1;
        p1=(struct Student*)malloc(LEN);
        scanf("%ld,%f",&p1->num,&p1->score);
    }
    p2->next=NULL;
    return head;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    struct Student *pt;
    pt=create();
    for(int i=0;i<n;i++){
    printf("\n num:%ld\n score:%5.1f\n",pt->num,pt->score);
        pt=pt->next;
    }
    //printf("Hello, World!\n");
    return 0;
}
