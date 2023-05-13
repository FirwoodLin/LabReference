/*
 * @Descripttion:
 * @version:
 * @Author: SE202203林彬彬
 * @Date: 2022-10-26 21:17:33
 * @LastEditors: SE202203林彬彬
 * @LastEditTime: 2022-10-29 19:01:15
 */
/*实验4-3跟踪调试题程序利用R计算圆的面积s*/
#include <stdio.h>
#include <assert.h>
#define R
int integer_fraction(float x);
int main(void)
{
    float r, s;
    // int s_integer = 0;
    printf("Input a number: ");
    scanf("%f", &r);
#ifdef R
    s = 3.14159 * r * r;
    printf("Area of round is: %f\n", s);
    // s_integer = integer_fraction(s);
    // assert((s - s_integer) < 0.5);
    printf("The integer fraction of area is %.0f\n", s);
#endif
    return 0;
}

int integer_fraction(float x)
{
    int i = x;
    return i;
}
