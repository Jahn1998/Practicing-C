//
//  main.c
//  BigNumPro2
//
//  Created by 杨恩 on 2021/1/7.
//
//大数乘法
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char a[100],b[100];
    //char sig;
    scanf("%s",a);
    scanf("%s",b);
    //把数字前的符号保留
    /*
    if(!strcmp(&a[0],'-')){
        if(!strcmp(&b[0],'-')){
        sig='+';
        }else
           sig='-';
    }
    if(!strcmp(&b[0],'-')){
        if(!strcmp(&a[0],'-')){
        sig='+';
        }else
           sig='-';
    }
    char *at;
    char *bt;
    at=a;
    bt=b;
    //把数字前的0去掉
    while(*at==0){
        at++;
    }
    while(*bt==0){
        bt++;
    }
    //at,bt重新归位
    at=a;
    bt=b;
    
    for(at;;at++){
        
    }
    */
    long int alen,blen;
    long int i,j;
    int k=0;
    alen=strlen(a);
    blen=strlen(b);
    int c[alen+blen];
    /**初始化
    for(i=0;i<alen+blen;i++){
        c[i]='0';
    }*/
    memset(c,0,sizeof(c));
    for(i=0;i<alen;i++){
        for(j=0;j<blen;j++)
        {
            c[i+j]=c[i+j]+(a[i]-'0')*(b[j]-'0');
            //printf("%4d ",c[i+j]);
            //printf("i=%2d j=%2d ",i,j);
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");
    //printf("c=%s",c);
    for(i=alen+blen-2;i>-1;i--){
        //printf("c[%d]=%d ",i,c[i]);
        if(c[i]>=10){
            c[i-1]=c[i-1]+c[i]/10;
            c[i]=c[i]%10;
            if(i==0)
                k=-1;
        }
        
    }
    //while(c[i]==0)
        //i++;
    for(i=k;i<alen+blen-1;i++){
        printf("%d",c[i]);
    }
    printf("\n");
    return 0;
}

