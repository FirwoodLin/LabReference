/*
 * @Descripttion:
 * @version:
 * @Author: Fir
 * @Date: 2022-12-07 19:29:15
 * @LastEditors: Fir
 * @LastEditTime: 2022-12-07 19:33:59
 */
#include <stdio.h>
int a, b;
int digit(int n, int k)
{
    int pow = 1;
    for (int i = 1; i < k; i++)
        pow *= 10;
    if (pow > n)
        return -1;
    n /= pow;
    return n % 10;
}
int main()
{
    scanf("%d%d", &a, &b);
    printf("%d",digit(a,b));
    return 0;
}