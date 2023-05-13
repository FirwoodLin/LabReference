/*
 * @Descripttion: 
 * @version: 
 * @Author: Fir
 * @Date: 2022-12-07 08:02:30
 * @LastEditors: Fir
 * @LastEditTime: 2022-12-07 08:06:00
 */
#include <stdio.h>
#include <ctype.h>
int main(){
    char c=getchar();
    if((c>='0' && c<='9')){
        putchar(c);
    }else if(tolower(c)<='f' && tolower(c)>='a'){
        c=tolower(c);
        printf("%d",c-'a'+10);
    }else{
        putchar(c);
    }
    return 0;
}