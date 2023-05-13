/*
 * @Descripttion:
 * @version:
 * @Author: Fir
 * @Date: 2022-11-14 20:34:56
 * @LastEditors: Fir
 * @LastEditTime: 2022-11-14 20:46:53
 */
#include <stdio.h>
#include <string.h>
void sol(int x, int y, int (*a)[106])
{
    for (int j = y - 1; j >= 0; j--)
    {
        for (int i = 0; i < x; i++)
        {
            printf("%d", a[i][j]);
            if (i != x - 1)
                printf(" ");
        }
        if (j != 0)
            printf("\n");
    }
}
int main()
{
    int n, m, a[106][106] = {0};
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    sol(n, m, a);
    return 0;
}