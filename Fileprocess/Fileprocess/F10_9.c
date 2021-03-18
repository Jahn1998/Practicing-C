//
//  F10_9.c
//  Fileprocess
//10.9
/*
有一磁盘文件"employee"，内存放职工的数据。每个职工的数据包括职工姓名、职工号、性别、年龄、住址、工资、健康状况、文化程度。现要求将职工名、工资的信息单独抽出来另外建立一个简明的职工工资文件。
 */

//  Created by 杨恩 on 2021/1/25.
//

 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct emploee
{char    num[6];
 char    name[10];
 char    sex[2];
 int     age;
 char    addr[20];
 int     salary;
 char    health[8];
 char    edu[10];
 }work[3];

struct emp
 {char name[10];
  int  salary;
 }em_case[3];
/*
 打开保存员工资料的emp文件,把emp文件中的信息转入work中
 把信息由work结构体，转向em_case结构体
 把em_case中的信息转向emp_salary中
 */
FILE *outpCert(){
    FILE *fp1,*fp2;
    int i;
    if((fp1=fopen("emp","rb"))==NULL){
        printf("error1");
        exit(0);
    }
    for(i=0;i<3;i++){
        fread(&work[i],sizeof(struct emploee),1,fp1);
        em_case[i].salary=work[i].salary;
        strcpy(em_case[i].name,work[i].name);
    }
    if((fp2=fopen("emp_salary","wb"))==NULL){
        printf("error2");
        exit(0);
    }
    for(i=0;i<3;i++){
        if(fwrite(&em_case[i],sizeof(struct emp),1,fp2)!=1)
            printf("error");
        printf("%s,%d\n",em_case[i].name,em_case[i].salary);
    }
    return fp1;
}
/*
 给员工输入真实的信息；
 emp是所有的信息的文件
 功能：输入员工信息，并保存在emp文件中
 */
FILE *inpCert(){
    FILE *fp;
    if((fp=fopen("emp","wb"))==NULL){
        printf("error1");
        exit(0);
    }
    int i;
    printf("请输入职工信息：name,num,sex,age,addr,salary,health,edu");
    printf("\n");
    for(i=0;i<3;i++){
        scanf("%s%s%s%d%s%d%s%s",work[i].name,work[i].num,work[i].sex,&work[i].age,work[i].addr,&work[i].salary,work[i].health,work[i].edu);
        if(fwrite(&work[i],sizeof(struct emploee),1,fp)!=1)
            printf("error2");
        
    }
    fclose(fp);
    
    return fp;
}
