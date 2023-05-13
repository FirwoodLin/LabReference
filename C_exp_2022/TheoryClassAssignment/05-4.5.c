/*
 * @Descripttion:
 * @version:
 * @Author: Fir
 * @Date: 2022-12-07 08:46:24
 * @LastEditors: Fir
 * @LastEditTime: 2022-12-07 09:18:20
 */
/*
输入两个实数和一个四则运算符（+，-，*，/），
根据运算符执行相应的运算并输出运算结果。
输入输出说明：
1、要求浮点数采用double类型定义，输出为6位浮点数。
2、如果输入运算符错误或无法计算，则打印“Error”。
 */
#include <stdio.h>
struct Number
{
    int is_double;
    int i;
    double d;
    int dig_pow;
};
typedef struct Number num;
num a, b;
void getNum(num *x)
{
    // int sum=0;
    // int is_double=0;
    char c;
    while ((c = getchar()) && c != ' ')
    {
        if (c == '.')
        {
            x->is_double = 1;
            x->d = x->i;
            x->i = 0;
            x->dig_pow = 1;
        }
        else
        {

            x->dig_pow *= 10;
            x->i *= 10;
            x->i += c - '0';
        }
    }
    if (x->is_double == 1)
        x->d += 1.0 * x->i / x->dig_pow;
}
int main()
{
    getNum(&a);
    getNum(&b);
    char op;
    while ((op = getchar()) && op == ' ')
        ;
    if (op == '/')
    {
        if (b.is_double == 0 && b.i == 0)
            printf("Error");
        else
            printf("%.6lf", 1.0 * (a.is_double == 1 ? a.d : a.i) / (b.is_double == 1 ? b.d : b.i));
    }
    else if (op == '+')
    {
        printf("%.6lf", 1.0 * (a.is_double == 1 ? a.d : a.i) + (b.is_double == 1 ? b.d : b.i));
    }else if (op == '*')
    {
        printf("%.6lf", 1.0 * (a.is_double == 1 ? a.d : a.i) * (b.is_double == 1 ? b.d : b.i));
    }else if (op == '-')
    {
        printf("%.6lf", 1.0 * (a.is_double == 1 ? a.d : a.i) - (b.is_double == 1 ? b.d : b.i));
    }
    else{
        printf("Error");
    }
    return 0;
}