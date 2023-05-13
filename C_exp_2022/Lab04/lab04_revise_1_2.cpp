/*
 * @Descripttion:
 * @version:
 * @Author: SE202203林彬彬
 * @Date: 2022-10-26 21:07:44
 * @LastEditors: SE202203林彬彬
 * @LastEditTime: 2022-10-26 21:11:28
 */
/*实验4-2程序修改替换题程序*/
#include <stdio.h>
#define max(x, y, z) (x >= y && x >= z ? x : (y >= x && y >= z ? y : z))
float sum(float x, float y);
int main(void)
{
    int a, b, c;
    float d, e;
    printf("Input three integers:");
    scanf("%d %d %d", &a, &b, &c);
    printf("\nThe maximum of them is %d\n", max(a, b, c));

    printf("Input two floating point numbers:");
    scanf("%f %f", &d, &e);
    printf("\nThe sum of them is  %f\n", sum(d, e));
    return 0;
}
float sum(float x, float y)
{
    return x + y;
}
