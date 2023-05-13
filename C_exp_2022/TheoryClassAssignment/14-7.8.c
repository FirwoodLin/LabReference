/*
 * @Descripttion:
 * @version:
 * @Author: Fir
 * @Date: 2022-12-07 20:16:21
 * @LastEditors: Fir
 * @LastEditTime: 2022-12-11 20:22:53
 */
#include <stdio.h>
int n, k;
int arr[1000];
void swap(int *a, int *b)
{
    *a += *b;
    *b = *a - *b;
    *a = *a - *b;
}
void sol(int s, int mid, int t)
{
    // exclusive mid;exclusive t
    if (mid - s == t - mid)
    {
        int i = s, j = mid;
        while (i < mid)
        {
            swap(arr + i, arr + j);
            i++, j++;
        }
        return;
    }
    else
    {
        int i = s, j = mid;
        while (i < mid && j < t)
        {
            swap(arr + i, arr + j);
            i++, j++;
        }
        if (j == t)
        {
            sol(i, mid, t);
        }
        else if (i == mid)
        {
            sol(i, j, t);
        }
    }
}
int main()
{
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; i++)
        scanf("%d", arr + i);
    sol(0, k, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}