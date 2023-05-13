/*
 * @Descripttion:
 * @version:
 * @Author: SE202203林彬彬
 * @Date: 2022-10-19 18:42:39
 * @LastEditors: SE202203林彬彬
 * @LastEditTime: 2022-10-25 10:09:08
 */
/*实验3-2程序修改替换第(2)题程序：根据公式计算 s*/
#include <stdio.h>
double mulx(double x, int n);
long fac(int n);
double sum(double x, int n)
{
    static double z = 1.0;
    for (int i = 1; i <= n; i++)
        z += mulx(x, i) / fac(i);
    return z;
}
double mulx(double x, int n) // power
{
    int i;
    static double z = 1.0;
    z = z * x;
    return z;
}
long fac(int n)
{
    if (n == 1)
        return 1;
    static long h = 1;
    h *= n;
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
