/*
 * @Descripttion:
 * @version:
 * @Author: SE202203林彬彬
 * @Date: 2022-10-19 12:53:38
 * @LastEditors: SE202203林彬彬
 * @LastEditTime: 2022-10-19 13:19:22
 */
/*实验3-1改错题程序：计算s=1!+2!+3!+…+n!*/
#include <stdio.h>
unsigned long long sum_fac(int n);
int main(void)
{
    // int k;
    int k;
    for (k = 1; k <= 20; k++)
        printf("k=%d\tthe sum is %llu\n", k, sum_fac(k));
    getchar();
    getchar();
    return 0;
}
unsigned long long sum_fac(int n)
{
    unsigned long long s = 0;
    // int i, fac;
    int i;
    unsigned long long fac;
    fac = 1;
    for (i = 1; i <= n; i++)
    {

        fac *= i;
        s += fac;
    }
    return s;
}
