/*
 * @Descripttion:
 * @version:
 * @Author: Fir
 * @Date: 2022-12-11 21:20:26
 * @LastEditors: Fir
 * @LastEditTime: 2022-12-11 21:44:34
 */
#include <stdio.h>

int leapYear(int a)
{

    if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
    {             // 闰年判断条件
        return 1; // 是闰年返回1
    }
    else
    {
        return 0; // 不是闰年返回0
    }
}

int calculateDate(int year, int month, int day)
{

    int sum = 0, i;
    int a[15] = {0,31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; // 数组a存放平年每月的天数
    int b[15] = {0,31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; // 数组b存放闰年每月的天数
    if (month > 12 || month < 1)
        return -1;
    if (leapYear(year) == 1)
    { // 判断是否为闰年
        if (day > b[month])
            return -1;
        for (i = 0; i <=month - 1; i++)
        {
            sum += b[i]; // 是闰年累加数组b前month - 1个月的天数
        }
    }
    else
    {
        if (day > a[month])
            return -1;
        for (i = 0; i <=month - 1; i++)
        {
            sum += a[i]; // 不是闰年，累加数组a前month - 1个月的天数
        }
    }

    sum += day; // 根据前面累加的结果加上日期，求出总天数
    return sum;
}
int main(int argc, const char *argv[])
{

    int year, month, day, result;
    // printf("请输入年月日\n");
    scanf("%d%d%d", &year, &month, &day);     // 输入年月日
    result = calculateDate(year, month, day); // 调用计算天数函数
    if (result == -1)
    {
        printf("error");
    }
    else
        printf("%d", result);
    // printf("第%d天\n",result);

    /*
     请输入年月日
     2017 2 26
     第57天
     */
    return 0;
}
