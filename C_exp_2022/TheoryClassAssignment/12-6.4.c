/*
 * @Descripttion: 
 * @version: 
 * @Author: Fir
 * @Date: 2022-12-07 19:39:33
 * @LastEditors: Fir
 * @LastEditTime: 2022-12-07 19:41:00
 */
#include <stdio.h>
#define swap(x,y) (x+=y,y=x-y,x=x-y)
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    swap(a,b);
    printf("%d %d",a,b);
    return 0;
}