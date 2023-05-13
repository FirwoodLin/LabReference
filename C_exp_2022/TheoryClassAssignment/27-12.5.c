/*
 * @Descripttion: 
 * @version: 
 * @Author: Fir
 * @Date: 2022-12-11 22:15:14
 * @LastEditors: Fir
 * @LastEditTime: 2022-12-11 22:15:15
 */
#include<stdio.h>
#include <string.h>
int hui(char *s,int start){
    int len=strlen(s);
    if(start>=len/2)
        return 1;
    if(s[start]==s[len-start-1]){
        hui(s,start+1);
    }else{
        return 0;
    }
}
int main()
{
    char s[100]={};
    scanf("%s",s);
    printf("%d",hui(s,0));
    return 0;
}