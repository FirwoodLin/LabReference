/*
 * @Descripttion:
 * @version:
 * @Author: SE202203林彬彬
 * @Date: 2022-10-25 10:05:33
 * @LastEditors: SE202203林彬彬
 * @LastEditTime: 2022-10-25 10:05:34
 */
/*实验3-2程序修改替换第(2)题程序：根据公式计算 s*/
#include <stdio.h>
double mulx(double x, int n);
long fac(int n);
double sum(double x, int n)
{
    int i;
    double z = 1.0;
    for (i = 1; i <= n; i++)
    {
        z = z + mulx(x, i) / fac(i);
    }
    return z;
}
double mulx(double x, int n)
{
    int i;
    double z = 1.0;
    for (i = 0; i < n; i++)
    {
        z = z * x;
    }
    return z;
}
long fac(int n)
{
    int i;
    long h = 1;
    for (i = 2; i <= n; i++)
    {
        h = h * i;
    }
    return h;
}
int main()
{
    double x;
    int n;
    printf("Input x and n:");
    scanf("%lf%d", &x, &n);
    printf("The result is %lf:", sum(x, n)); 
    getchar();
    getchar();
    return 0;
}
