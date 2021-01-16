//
//  main.c
//  Pointer8.3
//输入十个整数，将其中最小的数与第一个数兑换，把最大的与最后一个兑换。
//写三个函数，   输入十个数；进行处理；输出十个数
//  Created by 杨恩 on 2021/1/15.
//12 23 3 4 5 2 1 32 6 7 9 10
//12 23 39999 4 599 20 1 32 6 7
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, const char * argv[]) {
    // insert code here...
    int *input(int n);
    int *process(int n,int*num);
    void output(int n,int*num);
    int *p,*p2;
    int n=20;
    p=input(n);
    p2=process(n,p);
    output(n,p2);
    for(int i=0;i<n;i++){
        //printf("%d ",*p2++);
    }
    printf("\n");
    return 0;
}
void output(int n,int*num){
    int *p2;
    for(p2=num;p2<num+n;p2++){
        printf("%d ",*p2);
    }
    printf("\n");
}
int* input(int n){
    int num[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++){
        //printf("%d ",num[i]);
    }
    printf("\n");
    int *p=num;
    return p;
}
int* process(int n, int*num){
    int temp,i,t;
    temp=num[0];
    t=0;
    for(i=0;i<n;i++){
        if (temp>num[i]){
            temp=num[i];
            t=i;
        }
    }
    *(num+t)=*num;
    *num=temp;
    temp=num[n-1];
    t=n-1;
    for(i=0;i<n;i++){
        if (temp<num[i]){
            temp=num[i];
            t=i;
        }
    }
    *(num+t)=*(num+n-1);
    *(num+n-1)=temp;
    for(i=0;i<n;i++){
        //printf("%d ",num[i]);
    }
    printf("\n");
    return num;
}

