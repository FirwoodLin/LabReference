/*
 * @Descripttion:
 * @version:
 * @Author: Fir
 * @Date: 2022-12-07 19:35:09
 * @LastEditors: Fir
 * @LastEditTime: 2022-12-07 19:38:56
 */
#include <stdio.h>
#include <string.h>
void rev(char *s)
{
    int len = strlen(s);
    if (len == 0)
        return;
    printf("%c", s[len - 1]);
    s[len - 1] = '\0';
    rev(s);
}
int main()
{
    char s[100] = {};
    gets(s);
    rev(s);
    return 0;
}