//最长回文子串
//  main.c
//  longest_Pal
//
//  Created by 杨恩 on 2021/1/9.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(int argc, const char * argv[]) {
    char s[100];
    scanf("%s",s);
    int slen;
    int i,j,maxl=0,k=0;
    slen=strlen(s);
    //动态规划
    //二维数组
    //0->False; 1->True;
    int dp[slen][slen];
    memset(dp,0,sizeof(dp));
    for(i=0;i<slen;i++){
        for(j=0;j<=i;j++){
            if(j==i){
                dp[j][i]=1;
            }
            if(j<i){
                if((dp[j+1][i-1]==1)&&(s[j]==s[i]))
                   dp[j][i]=1;
                if((i-j<=2)&&(s[j]==s[i]))
                    dp[j][i]=1;
            }
            if(dp[j][i]==1){
                if(i-j+1>=maxl){
                    maxl=i-j+1;
                    k=j;
                    printf("maxl=%d k=%d",maxl,k);
                    printf("\n");
                }
            }
        }
    }
    printf("\n");
    /*输出dp矩阵*/
    for(i=0;i<slen;i++){
        for(j=0;j<slen;j++){
            printf(" %4d ",dp[i][j]);
        }
        printf("\n");
    }
    /*输出最长*/
    for(i=k;i<k+maxl;i++){
        printf("%c",s[i]);
    }
    printf("\n");
}
