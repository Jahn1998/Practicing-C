//
//  main.c
//  Pointer8.21
//用指向指针的指针的方法对n个整数排序并输出。要求将排序单独写成一个函数。n个整数在主函数中输入，最后在主函数中输出。
//  Created by 杨恩 on 2021/1/16.
//12 2 4 2 3 1 87 90 89 0 43 23 4 1 2

#include <stdio.h>

int main(int argc, const char * argv[]) {
    void sort(int **p,int n);
    int num[20],*pnum[20];
    int *p,**pn=pnum,i,n;
    n=10;
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++){
        pnum[i]= &num[i];
    }
    p=num;
    pn=pnum;
    sort(pn,n);
    for(i=0;i<n;i++){
        printf("%d ",**pn);
        pn++;
    }
    return 0;
}
void sort(int **p,int n){
    int *temp,i,j;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(**(p+i)>**(p+j)){
                temp=*(p+j);
                *(p+j)=*(p+i);
                *(p+i)=temp;
            }
        }
    }
    
}
