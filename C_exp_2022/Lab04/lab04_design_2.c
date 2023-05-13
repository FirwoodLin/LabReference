/*
 * @Descripttion:
 * @version:
 * @Author: SE202203林彬彬
 * @Date: 2022-10-29 19:19:38
 * @LastEditors: SE202203林彬彬
 * @LastEditTime: 2022-10-29 19:39:34
 */
#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define CHANGE 1

int main()
{
    char str[100] = {};
    fgets(str, 100, stdin);
#ifdef CHANGE
    if (CHANGE == 1)
    {
        int len = strlen(str);
        for (int i = 0; i < len; i++)
            if (isupper(str[i]))
                str[i] = tolower(str[i]);
            else
                str[i] = toupper(str[i]);
    }
#endif
    fputs(str, stdout);
    return 0;
}