//
//  main.c
//
//
//  Created by 杨恩 on 2021/1/12.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    void check(int*);
    int *p1,i;
    p1=malloc(5*sizeof(int));
    //int *p={67,98,59,78,57};
    for(i=0;i<5;i++){
        scanf("%d",p1+i);
    }
    check(p1);
}
void check(int*p){
    int i;
    printf("They are fail:\n");
    for(i=0;i<5;i++){
        if(p[i]<60){
            printf("%d",p[i]);
        printf("\n");
        }
    }
}
