/*
 * @Descripttion:
 * @version:
 * @Author: Fir
 * @Date: 2022-12-11 21:52:07
 * @LastEditors: Fir
 * @LastEditTime: 2022-12-11 22:06:04
 */
#include <stdio.h>
#include <string.h>
// #include
struct Web
{
    /* data */
    char abbr[100];
    char fullname[100];
    char url[100];
} s[3];
typedef struct Web w;

int main()
{
    for (int i = 0; i < 3; i++)
    {
        scanf("%s%s%s", s[i].url, s[i].abbr, s[i].fullname);
    }
    for (int i = 0; i < 3 - 1; i++)
    {
        for (int j = 0; j < 3 - 1 - i; j++)
            if (strcmp(s[j].abbr, s[j + 1].abbr) > 0)
            {
                w t = s[j];
                s[j] = s[j + 1];
                s[j + 1] = t;
            }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%s %s %s\n", s[i].url, s[i].abbr, s[i].fullname);
    }
    char re[100] = {};
    scanf("%s",re);
    for (int i = 0; i < 3; i++)
    {
        if (strcmp(re, s[i].abbr) == 0)
        {
            printf("%s", s[i].url);
            break;
        }
        // printf("")
    }
    return 0;
}