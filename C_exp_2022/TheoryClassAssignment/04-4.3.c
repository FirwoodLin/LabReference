/*
 * @Descripttion: 
 * @version: 
 * @Author: Fir
 * @Date: 2022-12-07 08:41:30
 * @LastEditors: Fir
 * @LastEditTime: 2022-12-07 08:45:50
 */
#include <stdio.h>
int month[20]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int main(){
    int y,m,d;
    scanf("%d%d%d",&y,&m,&d);
    if((y%400==0)|| (y%100!=0 && y%4==0)){
        month[2]+=1;
    }
    int sum=0;
    for(int i=1;i<m;i++){
        sum+=month[i];
    }
    printf("%d",sum+d);
    return 0;

}