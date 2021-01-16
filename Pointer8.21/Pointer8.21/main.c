//
//  main.c
//  Pointer8.21
//
//  Created by 杨恩 on 2021/1/16.
//12 2 4 2 3 1

#include <stdio.h>

int main(int argc, const char * argv[]) {
    void sort(int **p,int n);
    int num[20],*pnum[20];
    int *p=num,*p_end,**pn=pnum,**pn_end,i,j;
    scanf("%d",p++);
    p_end=p;
    p=num;
    for(i=0;p<p_end;i++){
        pnum[i]= &num[i];
    }
    pn_end=pn;
    pn=pnum;
    sort(pnum,i);
    for(j=0;j<i;j++){
        printf("%d ",*pnum[j]);
    }
    return 0;
}
void sort(int **p,int n){
    int *temp,i,j;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(**(p+j)>**(p+j)){
                temp=*(p+j);
                *(p+j)=*(p+i);
                *(p+i)=temp;
            }
        }
    }
    
}
