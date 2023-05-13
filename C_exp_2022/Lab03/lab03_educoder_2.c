/*
 * @Descripttion:
 * @version:
 * @Author: SE202203林彬彬
 * @Date: 2022-10-19 19:54:16
 * @LastEditors: SE202203林彬彬
 * @LastEditTime: 2022-10-19 20:22:40
 */
#include <stdio.h>
#include <math.h>
#include <string.h>
// #define MAXN 10000
// int is_composite[MAXN+5],primes[MAXN+5];
// int prime_num;
// void O_seive(int n){
//     for(int i=2;i<=n;i++){
//         if(!is_composite[i])
//             primes[prime_num++] = i;
//         for(int j=0;j<prime_num && i*primes[j]<n;j++){
//             is_composite[i*primes[j]] = 1;
//             if(!(i%primes[j]))
//                 break;
//         }
//     }
// }
void bubble_sort(int *a,int size){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
int main()
{
    // O_seive(MAXN);
    for (int i = 2; i <= 10000; i++)
    {
        int factor[10000];
        memset(factor, 0, sizeof(int) * 10000);
        int factor_num = 1;
        factor[0] = 1;
        int sum = 1;
        int sq = floor(sqrt(i));
        for (int j = 2; j <= sq; j++)
        {
            if (!(i % j))
            {
                factor[factor_num++] = j;
                sum += j;
                if (j * j != i)
                {
                    factor[factor_num++] = i / j;
                    sum += i / j;
                }
            }
        }
        if (sum == i){
            bubble_sort(factor,factor_num);
            printf("%d=",i);
            for(int i=0;i<factor_num-1;i++){
                printf("%d+",factor[i]);
            }
            printf("%d\n",factor[factor_num-1]);
        }
    }
    getchar();
    getchar();
    return 0;
}