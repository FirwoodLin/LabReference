/*
 * @Descripttion:
 * @version:
 * @Author: Fir
 * @Date: 2022-12-07 09:29:49
 * @LastEditors: Fir
 * @LastEditTime: 2022-12-07 09:36:27
 */
#include <stdio.h>
int min(int x1, int x2)
{
    return x1 > x2 ? x1 : x2;
}
int max(int x1, int x2)
{
    return x1 > x2 ? x2 : x1;
}
int gcd(int a, int b)
{
    if (b==0)
        return a;
    else
        return gcd(b,a%b);
}
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int g = gcd(min(a,b),max(a, b));
    printf("%d %d",g,a/g*b);
    return 0;
}