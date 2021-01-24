/**
 *
 * @param n int整型 the n
 * @return int整型
 */
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define N 15
int place(int k,int n,int x[]){
    int i;
    for(i=1;i<k;i++){
        if(abs(k-i)==abs(x[k]-x[i])||x[k]==x[i]){
            return 0;
        }
    }
    return 1;
}
int *queen(int k,int n,int *sum,int x[]){
    int i;
   if(k>n){
        (*sum)++;
    }
    else{
        for(i=1;i<=k;i++){
            x[k]=i;
            if(place(k,n,x)){
                queen(k+1,n,sum,x);
            }
        }
    }
    return sum;
}
int Nqueen(int n ) {
    int x[N]={0};
    int count=0;
    int *sum=&count;
    int res=*queen(1,n,sum,x);
    return res;
      
}
int main(){
    printf("%d",Nqueen(8));
}

