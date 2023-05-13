/*
 * @Descripttion:
 * @version:
 * @Author: SE202203林彬彬
 * @Date: 2022-10-18 19:01:17
 * @LastEditors: SE202203林彬彬
 * @LastEditTime: 2022-10-18 19:52:43
 */
#include <stdio.h>
int main()
{
    char c;
    int num_space = 0;
    while (c = getchar(), c != EOF)
    {
        if (c == ' ')
            num_space++;
        else if (num_space)
        {
            putchar(' ');
            putchar(c);
            num_space = 0;
        }
        else
            putchar(c);
    }
    getchar();
    getchar();
    return 0;
}