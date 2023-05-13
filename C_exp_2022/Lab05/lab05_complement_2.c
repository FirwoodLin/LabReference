/*
 * @Descripttion: 
 * @version: 
 * @Author: SE202203林彬彬
 * @Date: 2022-11-02 19:30:06
 * @LastEditors: SE202203林彬彬
 * @LastEditTime: 2022-11-02 19:43:11
 */
#include <stdio.h>
#define M 10
#define N 3

int main(){
    int a[M+1]={},now=0;
    // a: 0 unkilled;1 killed
    for(int i= 1 ; i<=M;i++){
        // M-1 to kill; 1 to live
        for(int j=1;j<=N;j++){
            if(++now > M)
                now=1;
            if(a[now])
                j--;
        }
        printf("%6d",now);
        a[now] = 1;//killed
    }
    return 0;
}