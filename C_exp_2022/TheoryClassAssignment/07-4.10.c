/*
 * @Descripttion:
 * @version:
 * @Author: Fir
 * @Date: 2022-12-07 09:23:43
 * @LastEditors: Fir
 * @LastEditTime: 2022-12-07 09:28:32
 */
#include <stdio.h>
double pi;
double item;
int main()
{
    item = 1;
    int flag = 1;
    for (int i = 1; item >= 1e-5; i += 2)
    {
        item = 1.0 / i;
        pi += flag * item;
        flag *= -1;
    }
        pi += flag * item;

    printf("%lf",pi*4.0);
    return 0;
}