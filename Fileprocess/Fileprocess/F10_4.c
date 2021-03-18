//
//  F10_4.c
//  Fileprocess
//
//  Created by 杨恩 on 2021/1/24.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "F10_4.h"
FILE* comb(char* name1,char* name2){
    FILE *fp;
    int i,j,n;
    char c[100],ch,t;
    if((fp=fopen(name1,"r"))==NULL){
        printf("\ncan not open file\n");
        exit(0);
    }
    printf("file %s :\n",name1);
    for(i=0;(ch=fgetc(fp))!=EOF;i++){
        c[i]=ch;
        putchar(c[i]);
    }
    fclose(fp);
    printf("\n");
    if((fp=fopen(name2,"r"))==NULL){
        printf("\ncar n not open file\n");
        exit(0);
    }
    printf("file %s :\n",name2);
    for(;(ch=fgetc(fp))!=EOF;i++){
        c[i]=ch;
        putchar(c[i]);
    }
    fclose(fp);
    printf("\n");
    n=i;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(c[i]>c[j]){
                t=c[i];
                c[i]=c[j];
                c[j]=t;
            }
        }
    }
    printf("file C :\n");
    fp=fopen("c1","w");
    for(i=0;i<n;i++){
        fputc(c[i],fp);
        putchar(c[i]);
    }
    printf("\n");
    fclose(fp);
    return fp;
}
