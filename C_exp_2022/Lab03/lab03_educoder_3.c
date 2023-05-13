/*
 * @Descripttion:
 * @version:
 * @Author: SE202203林彬彬
 * @Date: 2022-10-19 20:53:03
 * @LastEditors: SE202203林彬彬
 * @LastEditTime: 2022-10-25 11:26:15
 */
#include <math.h>
#include <stdio.h>
#include <string.h>
#define ull unsigned long long
ull pow_num[15] = {0, 1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000};
ull k;
char num_tag[10][10] = {"自幂", "自幂", "自幂", "水仙花", "四叶玫瑰", "五角星", "六合", "北斗星", "八仙", "自幂"};
ull quick_pow(ull x, ull p)
{
    if (p == 1)
        return x;
    if (p & 1)
        return quick_pow(x, p - 1) * x;
    ull ret = quick_pow(x, p >> 1);
    return ret * ret;
}
ull is_self_pow_num(ull x)
{
    // demanded function
    // return 1 when x is OK
    ull temp = x;
    ull sum = 0;
    while (temp)
    {
        sum += quick_pow(temp % 10, k);
        temp /= 10;
    }
    return sum == x;
}
int main()
{
    while (scanf("%llu", &k) != EOF)
    {
        if (!k)
            break;
        ull cnt = 0;
        ull ans[1005];
        memset(ans, 0, sizeof(ull) * 1005);
        // Iterate possible nums
        for (ull i = pow_num[k]; i < pow_num[k] * 10; i++)
        {
            if (is_self_pow_num(i))
                ans[cnt++] = i;
        }
        // Output
        printf("%d位的%s数共有%d个", k, num_tag[k], cnt);
        if (!cnt)
        {
            printf("\n");
            continue;
        }
        for (ull i = 0; i < cnt - 1; i++)
            printf("%llu,", ans[i]);
        printf("%llu\n", ans[cnt - 1]);
    }
    getchar();
    getchar();
}