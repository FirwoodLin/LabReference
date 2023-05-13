/*
 * @Descripttion: 
 * @version: 
 * @Author: Fir
 * @Date: 2022-12-07 08:07:08
 * @LastEditors: Fir
 * @LastEditTime: 2022-12-07 08:29:10
 */
#include <stdio.h>
/* 
输入无符号短整数k，
输出将k的高4位和低四位交换后的结果。
 */
/* 
Attention:
short 占 16 位；交换高低 4 位；而非 8 位
**无符号**短整型
 */
int main(){
unsigned short k;
    scanf("%hu",&k);
    // short*p = &k;
    unsigned short lo = (k&0x000f)<<12;
    unsigned short hi = (k&0xf000)>>12;
    printf("%d",hi+lo+(k&0x0ff0));
    return 0;
}