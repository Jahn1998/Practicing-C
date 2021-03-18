//
//  F10_3.c
//  Fileprocess
//
//  Created by 杨恩 on 2021/1/24.
//输入一串字符串，把大写改为小写

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "F10_3.h"
FILE* convert(char *File_name){
    FILE *fp;
    int i=0,len;
    char str[100];
    printf("\ninput a string\n");
    scanf("%s",str);
    if((fp=fopen(File_name,"w"))==NULL){
        printf("error");
        exit(0);
    }
    while(str[i]){
        if(str[i]>='a'&&str[i]<='z')
            str[i]=str[i]-32;
        fputc(str[i],fp);
        i++;
    }
    fclose(fp);
    fp=fopen(File_name,"r");
    len=strlen(str);
    fgets(str,len+1,fp);
    for(i=0;i<len;i++)
        printf("%c",str[i]);
    printf("\n");
    return fp;
}
