//
//  main.c
//  Pointer8.16
//
//  Created by 杨恩 on 2021/1/16.
//ch[200]={s,1,2,3,4,4,a,5,t,6,4,3,4,5,4}<-p;
//flag为判断*p所指的为数字or字符
//把ch中的字符保存成数字sum

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char ch[200],*p;
    int sum=0,i,a[200]={0};
    scanf("%s",ch);
    printf("\n");
    //puts(ch);
    p=ch;
    /*先保存在一个数组里*/
    i=0;
    while(*p!='\0'){
        if((*p)>='0'&&(*p)<='9'){
            sum=sum*10+*p-'0';
        }else{
            if(sum!=0){
                a[i]=sum;
                i++;
                sum=0;
            }
        }
        //最后一个
        if(sum!=0){
            a[i]=sum;
        }
        p++;
    }
    /*把a数组里*/
    for(i=0;i<200;i++){
        printf("%d, ",a[i]);
        if(a[i]==0)
            break;
    }
    return 0;
}
