/*
 * @Descripttion: 
 * @version: 
 * @Author: Fir
 * @Date: 2022-12-11 20:08:47
 * @LastEditors: Fir
 * @LastEditTime: 2022-12-11 20:46:20
 */
/* 
任务描述
本关任务： 
    编写函数strncpy(s,t,n)。它将字符数组t中的前n个字符复制到字符数组s中，并形成字符串。

相关知识
为了完成本关任务，你需要掌握：1.如何获取数组的长度，2.如何遍历数组。

测试说明
平台会对你编写的代码进行测试：
输入：ilovehust you 3
输出： youvehust
输入：aeiou infoi 5
输出：infoi
输入：aeiou infoi 6 
输出：infoi
 */
#include <stdio.h>
void strncpy(char *s1,char *s2,int n){
    int len2=0,len1=0;
    while(s2[len2]!='\0')len2++;
    if(len2<n)
        n=len2;
    while(s1[len1]!='\0')len1++;
    if(len1<n)
        n=len2;
    for(int i=0;i<n;i++){
        s1[i]=s2[i];
    }
}
int main(){
    char s1[100]={};
    char s2[100]={};
    int n;
    scanf("%s%s%d",s1,s2,&n);
    strncpy(s1,s2,n);
    printf("%s",s1);
    return 0;

}