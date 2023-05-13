/*
 * @Descripttion:
 * @version:
 * @Author: Fir
 * @Date: 2022-12-11 20:52:15
 * @LastEditors: Fir
 * @LastEditTime: 2022-12-11 21:13:45
 */
/*
任务描述
本关任务：将数组形式的冒泡排序程序修改为指针形式。输入5个数，用指针形式冒泡排序法对其进行排序，并输出排序后的结果。

测试说明
测试用例：
输入：12 15 17 2 3  输出：2 3 12 15 17
输入：9 8 6 4 2      输出：2 4 6 8 9
输入：4 3 9 6 1    输出：1 3 4 6 9
 */
#include <stdio.h>
int arr[100];
int n;
void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}
void bubble(int *p, int n)
{
    // for (int i=0;i<n-1;i++){
    //     int flag =1;
    //     int j=i;
    //     while(flag){
    //         flag=0;
    //         if(*(arr+j)>*(arr+j+1) && j<n-1){
    //             swap(arr+j,arr+j+1);
    //             flag = 1;
    //             j++;
    //         }
    //     }
    // }
    int flag=1;
    while(flag){
        flag=0;
        for(int i=0;i<n-1;i++){
            if(*(arr+i)>*(arr+1+i)){
                swap(arr+i,arr+i+1);
                flag =1 ;
            }
        }
    }
}
int main()
{
    // scanf("%d",&n);
    n = 5;
    for (int i = 0; i < n; i++)
        scanf("%d", arr + i);
    bubble(arr, 5);
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        if (i != n - 1)
            printf(" ");
    }
    return 0;
}