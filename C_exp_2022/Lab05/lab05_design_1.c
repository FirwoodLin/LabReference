/*
 * @Descripttion: 
 * @version: 
 * @Author: SE202203林彬彬
 * @Date: 2022-11-01 09:23:35
 * @LastEditors: SE202203林彬彬
 * @LastEditTime: 2022-11-01 09:30:29
 */
#include<stdio.h>
char str[40];
void func(int n,int pos){
    if(pos==0)
        return ;
    str[pos-1] = '0'+(n&1);
    func(n>>1,pos-1);
}
int main(){
    int n;
    scanf("%d",&n);
    func(n,32);
    for(int i=0;i<32;i++){
        printf("%c",str[i]);
    }
    return 0;
}