/*
 * @Descripttion: 
 * @version: 
 * @Author: Fir
 * @Date: 2022-12-11 21:16:18
 * @LastEditors: Fir
 * @LastEditTime: 2022-12-11 21:19:17
 */
#include <stdio.h>
int n;
int arr[1000];
void swap(int*a,int*b){
    int t= *a;
    *a=*b;
    *b=t;
}
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",arr+i);
    for(int i=0;i<n/2;i++)
        swap(arr+i,arr+n-i-1);
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
        if(i!=n-1)
            printf(" ");
    }
    return 0;
}