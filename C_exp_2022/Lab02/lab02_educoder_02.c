/*
 * @Descripttion: 
 * @version: 
 * @Author: SE202203林彬彬
 * @Date: 2022-10-18 19:55:20
 * @LastEditors: SE202203林彬彬
 * @LastEditTime: 2022-10-18 20:16:10
 */
#include <stdio.h>
int temp[20];
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for(int j=0;j<n+2*(n-i);j++)
            putchar(' ');
        for(int j=0;j<=i;j++){
            temp[j]= j==0 ? 1 : temp[j-1]*(i+1-j)/j;
            printf("%-4d",temp[j]);
        }
        printf("\n");
    }
    return 0;
}