/*
 * @Descripttion: 
 * @version: 
 * @Author: SE202203林彬彬
 * @Date: 2022-10-19 13:22:03
 * @LastEditors: SE202203林彬彬
 * @LastEditTime: 2022-10-19 18:37:56
 */
#include <stdio.h>
#define ull unsigned long long
#define MAXN 20+5
ull sum[MAXN];
ull product[MAXN];
ull sum_fac(int k);
int main(){
    int k;
    product[0] = product[1] = 1;
    for(k=1;k<=20;k++){
        printf("k=%d\tthe sum is %llu\n", k, sum_fac(k));
    }
    getchar();
    getchar();
}
ull sum_fac(int k){
    if(sum[k])
        return sum[k];
    if(product[k-1])
        product[k] = product[k-1]*k;
    else{
        for(int i=2;i<=k;i++)
            product[k]*=i;
    }
    return sum[k] = sum_fac(k-1)+product[k];
}