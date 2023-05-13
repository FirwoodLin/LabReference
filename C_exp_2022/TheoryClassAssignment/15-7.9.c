/*
 * @Descripttion: 
 * @version: 
 * @Author: Fir
 * @Date: 2022-12-11 20:07:49
 * @LastEditors: Fir
 * @LastEditTime: 2022-12-11 20:51:27
 */
/* 
任务描述
本关任务：编程统计输入的一段文字中每个数字字符、英文字符和其它字符出现的次数。

相关知识
为了完成本关任务，你需要掌握：1.如何获取数组的长度，2.如何遍历数组。

编程要求
要求用数组元素作为每个数字字符、英文字符和其他字符出现的次数的计数器。

测试说明
平台会对你编写的代码进行测试：

测试输入：342ijAw$!；
预期输出：3 4 2

测试输入：Wem；
预期输出：0 3 0

测试输入：311；
预期输出：3 0 0

测试输入：*&^~；
预期输出：0 0 4
 */
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int cnt[200];

int main(){
    char s[100]={};

    scanf("%s",s);
    int len = strlen(s);
    for(int i=0;i<len;i++){
        if(isdigit(s[i]))
            cnt[0]++;
        else if(isalpha(s[i]))
            cnt[1]++;
        else cnt[2]++;
    }
    printf("%d %d %d",cnt[0],cnt[1],cnt[2]);
    return 0;
}
