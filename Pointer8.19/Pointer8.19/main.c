//
//  main.c
//  Pointer8.19
//编写一个函数new，对n个字符开辟连续的存储空间，此函数应返回一个指针（地址），指向字符串开始的空间。new（n）表示分配n个字节的内存空间。
//  Created by 杨恩 on 2021/1/16.
//

#include <stdio.h>
#define NEWSIZE 1000
char newbuf[NEWSIZE];
char *newp=newbuf;
char *new(int n){
    if(newp+n<=newbuf+NEWSIZE){
        newp=newp+n;
        return (newp-n);
    }
    else
        return NULL;
}
void ffree(char *p){
    if(p>=newbuf&&p<newbuf+NEWSIZE)
        newp=p;
}

int main(int argc, const char * argv[]) {
    int* new2(int n);
    
    
    return 0;
}
int* new2(int n);
