/*
 * @Descripttion: 
 * @version: 
 * @Author: SE202203林彬彬
 * @Date: 2022-10-19 19:18:03
 * @LastEditors: SE202203林彬彬
 * @LastEditTime: 2022-10-19 19:35:31
 */
#include <stdio.h>
#define MAXN 100000+5
int is_prime[MAXN];
int primes[MAXN];
int prime_num;
void E_seive(int n){
    for(int i=2;i<=n;i++){
        if(!is_prime[i]){
            for(unsigned long long j=i*i;j<=n;j+=i)
                is_prime[j]=1;
            primes[prime_num++] = i;
        }
    }
}
int main(){
    E_seive(MAXN-5);
    int n;
    while(scanf("%d",&n)!=EOF){
        for(int i=0;i<prime_num;i++){
            if(!is_prime[n-primes[i]]){
                printf("%d=%d+%d\n",n,primes[i],n-primes[i]);
                break;
            }
        }
    }
    return 0;
}