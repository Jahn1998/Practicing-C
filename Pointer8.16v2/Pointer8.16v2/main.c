//
//  main.c
//  Pointer8.16v2
//
//  Created by 杨恩 on 2021/1/16.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char str[50],*pstr;
    int i=0,j=0,a[10],*pa,digit=0,ndigit=0;
    gets(str);
    //pstr=&str[0];
    pstr=str;
    //pa=&a[0];
    pa=a;
    while(*(pstr+i)!='\0'){
        if(*(pstr+i)>='0'&&*(pstr+i)<='9'){
            j++;//连续的位数
        }
        else{
            if(j>0){
                for(int l=j-1;l>=0;l--){
                    digit=10*digit+*(pstr+i-1-l)-'0';
                }
                *pa=digit;//把数字给当前数组的元素
                ndigit++;
                pa++;
                j=0;
                digit=0;
            }
        }
        i++;
    }
    if(j>0){
        for(int l=j-1;l>=0;l--){
            digit=10*digit+*(pstr+i-1-l)-'0';
        }
        *pa=digit;
        ndigit++;
        j=0;
    }
    j=0;
    pa=&a[0];
    for(j=0;j<ndigit;j++){
        printf("%d ",*(pa+j));
    }
    printf("\n");
    return 0;
}
