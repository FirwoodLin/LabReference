/*
 * @Descripttion: 
 * @version: 
 * @Author: SE202203林彬彬
 * @Date: 2022-10-29 19:04:30
 * @LastEditors: SE202203林彬彬
 * @LastEditTime: 2022-10-29 19:09:15
 */
#include <stdio.h>
#include<math.h>
#define GET_S(a,b,c) (a+b+c)/2.0
#define GET_AREA(a,b,c) sqrt(GET_S(a,b,c)*(GET_S(a,b,c)-a)*(GET_S(a,b,c)-b)*(GET_S(a,b,c)-c))
int main(){
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    printf("%.2f",GET_AREA(a,b,c));
    return 0;
}