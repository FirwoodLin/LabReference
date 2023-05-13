/*
 * @Descripttion:
 * @version:
 * @Author: SE202203林彬彬
 * @Date: 2022-11-02 20:39:31
 * @LastEditors: SE202203林彬彬
 * @LastEditTime: 2022-11-03 14:24:06
 */
#include <stdio.h>
int arr[15];
int ans;
void queen(int pos, int n)
{
    /// @brief 求解第 pos 层的可行方案-从第n层到第1层的顺序
    /// @param pos 当前行数
    /// @param n 总共的行数
    for (int i = 1; i <= n; i++)
    {
        // iterater:enumerate i
        // i : 第 n 行 皇后的列标
        int flag = 0;
        for (int j = n; j > pos; j--)
        {
            // checker: i is legal?
            // j：n ~ pos+1 行
            if (arr[j] == i               // 同一列
                || arr[j] - j == i - pos  // 同一个主对角线
                || arr[j] + j == pos + i) // 同一个次对角线
            {
                flag = 1;
                break;
            }
        }
        if (flag)
            continue;
        // 失败则放弃当前分支
        arr[pos] = i;
        if (pos == 1)
        {
            //到达最小规模问题
            ans += 1;
        }
        else
        {
            queen(pos - 1, n);
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    queen(n, n);
    if (ans == 0)
    {
        printf("无解");
    }
    else
    {
        printf("%d", ans);
    }
    return 0;
}