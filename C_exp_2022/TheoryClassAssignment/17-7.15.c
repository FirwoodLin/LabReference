/*
 * @Descripttion:
 * @version:
 * @Author: Fir
 * @Date: 2022-12-11 20:09:28
 * @LastEditors: Fir
 * @LastEditTime: 2022-12-11 20:41:19
 */
/*
任务描述
本关任务：输入n个十六进制数字，将其转换成为对应的十进制整数并输出转换结果。
输入数字间以换行作为区分，输出数字间以空格作为区分，程序应首先读入n，再循环读入要处理的数字。

测试说明
平台会对你编写的代码进行测试：

测试输入：
5
0x111
0x1Af
0xBcD
0x259
0x3fFF

预期输出：
273  431  3021  601  16383
 */
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int trans(char x)
{
    if (x <= '9' && x >= '0')
        return x - '0';
    x = tolower(x);
    int ans = x - 'a' + 10;
    // printf("\n transd:%d\t%c\n",ans,x);
    return ans;
}
void sol(char *s)
{
    int len = strlen(s);
    int ans = 0;
    int pow = 1;
    for (int i = len - 1; i >= 2; i--)
    {
        ans += pow * trans(s[i]);
        pow <<= 4;
    }
    printf("%d", ans);
}
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char s[100] = {};
        scanf("%s", s);
        sol(s);
        if (i != n - 1)
            printf(" ");
    }
    return 0;
}