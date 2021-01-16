//
//  main.c
//  Pointer8.13
//写一个用矩形法求定积分的通用函数，分别求sinx，cosx，expx的0-1的定积分
//  Created by 杨恩 on 2021/1/15.
//

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    float integral(float a,float b,float(*fun)(float),int n);
    float n=20.0;
    float fsin(float x);
    float fcos(float x);
    float fexp(float x);
    float(*p)(float);
    p=fsin;
    float c=integral(0.0,1.0,p,n);
    printf("%f",c);
    
    printf("\n");
    return 0;
}
float integral(float a,float b,float(*fun)(float),int n){
    int i;
    float x,s,h;
    h=(b-a)/n;
    x=a;
    s=0;
    for(i=0;i<n;i++){
        x=x+h;
        s=s+(*fun)(x)*h;
    }
    return s;
}
float fsin(float x){
    return sin(x);
}
float fcos(float x){
    return cos(x);
}
float fexp(float x){
    return exp(x);
}
