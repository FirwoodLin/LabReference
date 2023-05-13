/*
 * @Descripttion:
 * @version:
 * @Author: Fir
 * @Date: 2022-12-07 19:42:18
 * @LastEditors: Fir
 * @LastEditTime: 2022-12-07 20:02:27
 */
#include <stdio.h>
void selectSort(int *arr, int len)
{
    int proceeded = len;
    for (int i = len; i >= 2; i--)
    {
        // i: not sorted
        int max = arr[i];
        // int max_pos=i;
        for (int j = 1; j <= i; j++)
            if (arr[j] > max)
            {
                arr[i] = arr[j];
                arr[j] = max;
                max = arr[i];
                // max_pos=j;
            }
    }
}

int main()
{
    int arr[100] = {};
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d", arr + i);
    selectSort(arr, n);

    printf("%d", arr[1]);
    for (int i = 2; i <= n; i++)
        // scanf("%d",arr+i);
        printf(" %d", arr[i]);
    return 0;
}