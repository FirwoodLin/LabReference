/*
 * @Descripttion: 
 * @version: 
 * @Author: Fir
 * @Date: 2022-11-08 12:00:31
 * @LastEditors: Fir
 * @LastEditTime: 2022-11-08 12:04:06
 */
#include <stdio.h>

int main(int argc,char*argv[]){
    for(int i=1;i<=argc-1;i++){
        printf("param%d:%s\n",i,argv[i]);
    }
    return 0;
}