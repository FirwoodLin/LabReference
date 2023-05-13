/*
 * @Descripttion: 
 * @version: 
 * @Author: SE202203林彬彬
 * @Date: 2022-10-18 20:18:41
 * @LastEditors: SE202203林彬彬
 * @LastEditTime: 2022-10-18 20:27:11
 */
#include <stdio.h>
int main(){
    for(int i=100;i<=999;i++){
        if((i*i)%1000==i)
            printf("%d\n",i);
    }
    return 0;
}