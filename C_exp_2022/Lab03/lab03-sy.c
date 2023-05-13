/*
 * @Descripttion:
 * @version:
 * @Author: SE202203林彬彬
 * @Date: 2022-10-27 00:31:41
 * @LastEditors: SE202203林彬彬
 * @LastEditTime: 2022-10-27 00:35:47
 */
#include <stdio.h>
#include <string.h>
int main()
{
    for (int n = 3; n <= 10000; n++)
    {
        int wdl[10000]={};
        memset(wdl,0,sizeof(wdl));
        for (int t = 1; t < n; t++)
        {
            if (n % t == 0)
                wdl[t] = t;
        }
        int m = 0;
        for (int s = 1; s < n; s++)
        {
            m += wdl[s];
        }
        if (m == n)
            printf("%d\n", m);
        m = 0;
        // for (int r = 1; r < n; r++)
        // {
        //     wdl[r] = 0;
        // }
    }
    getchar();
    return 0;
}