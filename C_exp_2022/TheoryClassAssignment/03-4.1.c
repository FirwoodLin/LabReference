/*
 * @Descripttion:
 * @version:
 * @Author: Fir
 * @Date: 2022-12-07 08:30:36
 * @LastEditors: Fir
 * @LastEditTime: 2022-12-07 08:36:45
 */
#include <stdio.h>
/*
输入A，B，C三个学生的分数，
输出分数居中的那个学生的名字（A、B或C）及考试分数。
（如果A、B分数相同，输出学生A及其成绩）
 */
int a[5];
int main()
{
    for (int i = 0; i < 3; i++)
        scanf("%d", &a[i]);
    if (a[0] == a[1])
        printf("A %d", a[0]);
    else if ((a[0] > a[1] && a[1] > a[2]) || (a[0] < a[1] && a[1] < a[2]))
        printf("B %d", a[1]);
    else if ((a[0] > a[1] && a[0] < a[2]) || (a[0] < a[1] && a[0] > a[2]))
        printf("A %d", a[0]);
    else if ((a[0] > a[2] && a[1] < a[2]) || (a[0] < a[2] && a[1] > a[2]))
        printf("C %d", a[2]);
    return 0;
}