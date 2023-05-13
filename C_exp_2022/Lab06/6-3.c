/*
 * @Descripttion:
 * @version:
 * @Author: Fir
 * @Date: 2022-11-14 20:51:16
 * @LastEditors: Fir
 * @LastEditTime: 2022-12-07 07:59:15
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void sol(char *s)
{
    int flag = 0;
    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        if (s[i] == ' ' && flag == 0)
            continue;
        else if (s[i] == '\t')
        {
            continue;
        }
        else
        {
            flag = 1;
            printf("%c", s[i]);
        }
    }
    printf("\n");
}
int main()
{
    // int n;
    // scanf("%d",&n);
    // getchar();
    char s[80];
    while (gets(s) != NULL)
    {
        sol(s);
    }
    return 0;
}