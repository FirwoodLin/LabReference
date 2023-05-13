/*
 * @Descripttion: 
 * @version: 
 * @Author: SE202203林彬彬
 * @Date: 2022-10-12 20:13:53
 * @LastEditors: SE202203林彬彬
 * @LastEditTime: 2022-10-12 20:23:08
 */
#include<stdio.h> 
int main(){
    char c=getchar();
    int sub = 'a'-'A';
    while(c!=EOF){
        if(c<='Z' && c>='A')
            putchar((char)(c+sub));
        else
            putchar(c);
        c=getchar();
    }
    return 0;
}