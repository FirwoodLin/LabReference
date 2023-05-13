/*
 * @Descripttion:
 * @version:
 * @Author: SE202203林彬彬
 * @Date: 2022-10-12 20:50:52
 * @LastEditors: SE202203林彬彬
 * @LastEditTime: 2022-10-16 22:54:32
 */
#include <stdio.h>
unsigned long long arr[6];
void get_bit(unsigned long long n){
    for(int i=0;i<=31;i++){
        unsigned long long mask=1<<31;
        printf("%hx\n",mask);
        printf("%s",n&mask==0 ? "0" : "1");
        n<<=1;
    }
    printf("\n");
}
int main()
{
    unsigned long long x;
    while (scanf("%llu", &x) != EOF)
    {
        unsigned long long mask = 0x000000ff;
        for (int i = 0; i < 4; i++)
        {
            arr[i] = (x & mask)>>(8*i);
            mask <<= 8;
        }
        for (int i = 3; i >= 0; i--)
        {
            printf("%d", arr[i]);
            if (i != 0)
                printf(".");
        }
        printf("\n");
    }
    return 0;
}