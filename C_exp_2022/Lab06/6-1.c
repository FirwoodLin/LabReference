/*
 * @Descripttion:
 * @version:
 * @Author: Fir
 * @Date: 2022-11-08 12:12:17
 * @LastEditors: Fir
 * @LastEditTime: 2022-11-14 20:32:17
 */
#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    unsigned short *p = (unsigned short *) &x;
    printf("%04X%04X",*(p+1),*(p));
    return 0;
}