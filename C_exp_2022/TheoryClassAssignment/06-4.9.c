/*
 * @Descripttion:
 * @version:
 * @Author: Fir
 * @Date: 2022-12-07 09:19:22
 * @LastEditors: Fir
 * @LastEditTime: 2022-12-07 09:22:59
 */
/*
输出斐波那契数列（Fibonacci）数列的前n项
 */
#include <stdio.h>
int n;
int a[30];
int f(int x)
{
    if (a[x] != 0)
        return a[x];
    else
        return (a[x] = f(x - 1) + f(x - 2));
}
int main()
{
    a[1] = a[2] = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%6d", f(i));
        if (i % 8 == 0)
            printf("\n");
    }
    return 0;
}