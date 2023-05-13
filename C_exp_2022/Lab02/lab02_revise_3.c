/*
 * @Descripttion:
 * @version:
 * @Author: SE202203林彬彬
 * @Date: 2022-10-18 10:28:09
 * @LastEditors: SE202203林彬彬
 * @LastEditTime: 2022-10-18 11:18:55
 */
#include <stdio.h>
#include <math.h>
const int MAXN = 1000;
int is_prime[MAXN];
void E_seive(int max_num)
{
    // is_prime[1]=1;
    for (int i = 2; i <= max_num; i++)
    {
        if (is_prime[i])
            continue;
        for (int j = i + i; j <= max_num; j += i)
        {
            is_prime[j] = 1;
        }
    }
}
int main()
{
    E_seive(MAXN);
    printf("Below is a list requseted prime:\n");
    int ans_sum = 0;
    for (int i = 100; i <= 999; i++)
    {
        int temp = i;
        int flag = 0;
        // flag==0：符合要求，全部为合数
        while (temp && !flag)
        {
            if (!is_prime[temp])
                flag = 1;
            temp /= 10;
        }
        if (!flag)
        {
            printf("%d ", i);
            ans_sum++;
        }
        if (ans_sum && ans_sum % 14 == 0)
            printf("\n");
    }
    system("pause");
}