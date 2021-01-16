//
//  main.c
//  Pointer8.4
//有n个整数,使前面各数顺序向后移m个位置,最后m个数变成最前面m个数,见图8.43。 写一函数实现以上功能,在主函数中输人n个整数和输出调整后的n个数
//  Created by 杨恩 on 2021/1/15.
//2 3 1 4 5 6
//4 2 2 2 4 2 1 1 2 3 32 1
#include <stdio.h>

int main(int argc, const char * argv[]) {
    void f(int n,int m,int*num);
    int n,m;
    scanf("%d%d",&n,&m);
    if(n>m){
        int num[n];
        for(int i=0;i<n;i++){
            scanf("%d",&num[i]);
        }
        f(n,m,num);
        }
    printf("\n");
    return 0;
}
void f(int n,int m,int*num){
    int i,j=0,new[n];
    for(i=0;i<n-m;i++){
        new[m+i]=num[i];
    }
    for(i=n-m;i<n;i++){
        new[j]=num[i];
        j++;
    }
    for(i=0;i<n;i++)
        printf("%d ",new[i]);
}
