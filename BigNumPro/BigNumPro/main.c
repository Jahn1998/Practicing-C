//
//  main.c
//  BigNumPro
//大数相乘
//  Created by 杨恩 on 2021/1/7.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    char a[100]={0},b[100]={0};
    long int i,j,t,t1,t2;
    long int k;
    long int alen,blen,sumlen;
    long int minlen,maxlen;
    char* maxArr;
    char* minArr;
    int add=0;
    printf("Input the first string\n");
    scanf("%s",a);
    printf("Input the second string\n");
    scanf("%s",b);
    alen=strlen(a);
    blen=strlen(b);
    sumlen=alen+blen;
    if(alen>blen){
        maxlen=alen;
        minlen=blen;
        maxArr=a;
        minArr=b;
    }else{
        maxlen=blen;
        minlen=alen;
        maxArr=b;
        minArr=a;
    }
    int tempArr[minlen][sumlen];
    char sumArr[sumlen];
    printf("initial\n");
     for(i=0;i<minlen;i++){
        for(j=0;j<sumlen;j++){
            tempArr[i][j]=0;
            printf("tempArr[%d][%d]=%d ",i,j,tempArr[i][j]);
        }
         printf("\n");
    }
    for(j=0;j<sumlen;j++){
           sumArr[j]=0;
   }
    //memset(tempArr, 0, sizeof(tempArr));
    //memset(sumArr, 0, sizeof(sumArr));
    printf("value\n");
    for(i=minlen-1;i>-1;i--){
        add=0;
        k=sumlen-minlen+i;//每次k开始的地方
        for(j=maxlen-1;j>-1;j--){
            t1=maxArr[j]-'0';
            t2=minArr[i]-'0';
            tempArr[i][k]=add+(t1*t2)%10;
            add=(t1*t2)/10;
            printf("tempArr[%ld][%d]=%d ",i,k,tempArr[i][k]);
            k--;
            if(j==0){
                tempArr[i][k]=add;
                printf("tempArr[%ld][%d]=%d ",i,k,tempArr[i][k]);
            }
            
        }
      
        printf("\n");
        }
    printf("result\n");
    for(i=0;i<minlen;i++){
       for(j=0;j<sumlen;j++){
           printf("tempArr[%d][%d]=%d ",i,j,tempArr[i][j]);
       }
       printf("\n");
   }
    t=0;
    printf("add\n");
    for(j=sumlen-1;j>-1;j--){
        for(i=0;i<minlen;i++){
            t=t+tempArr[i][j];
       }
        sumArr[j]=t%10+'0';
        t=t/10;
   }
    printf("sumArr=%s\n",sumArr);
    if(sumArr[0]='0'){
        i=1;
        while(sumArr[i]){
            printf("%c",sumArr[i]);
            i++;
        }
    }
    printf("\n");
    return 0;
}
