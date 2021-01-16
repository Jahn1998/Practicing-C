//
//  main.c
//  Pointer8.17
// 写一函数，实现两个字符串的比较。即自己写一个strcmp函数，函数原型为int strcmp(char *p1, char *p2); 设p1指向字符串s1，p2指向字符串s2。要求当s1=s2时，返回值为0；若s1!=s2，返回它们二者第1个不同字符的ASCII码差值（如"BOY"与"BAD"，第2个字母不同，"O"与"A"之差为79-65=14）。如果s1>s2，则输出正值；如果s1<s2，则输出负值。
//  Created by 杨恩 on 2021/1/16.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char s1[50],s2[50];
    char *p1,*p2;
    gets(s1);
    gets(s2);
    p1=s1;
    p2=s2;
    while((*p1)!='\0'&&(*p2)!='\0'){
        if((*p1)!=(*p2)){
           printf("%d",(*p1)-(*p2));
            break;
        }
        p1++;
        p2++;
    }
    if((*p1)=='\0'||(*p2)=='\0'){
        printf("%d",0);
    }
    printf("\n");
    return 0;
}
