/*
 * @Descripttion: 
 * @version: 
 * @Author: SE202203林彬彬
 * @Date: 2022-10-12 18:53:42
 * @LastEditors: SE202203林彬彬
 * @LastEditTime: 2022-10-18 08:40:48
 */
#include<stdio.h>
#include <stdlib.h>
#define PI 3.14159
int main( void )
{
   int f ;
   short p, k ;
   double c, r, s ;

// /* 任务1 */
   printf("Input Fahrenheit: " ) ;
   scanf("%d", &f ) ;
   
   c = 5.0/9 * (f-32) ;
   printf( " \n %d (F) = %.2f (C)\n\n ", f, c ) ;

/* 任务2 */
printf("input the radius r:");
scanf("%lf", &r);
s = PI * r * r;
printf("\nThe acreage is %.2lf\n\n",s);

// /* 任务3 */
k = 0xa1b2, p = 0x8432;
int newint = (p&0xff00) | (k&0xff00 >> 8);
// newint = p&0xff00|k>>8;
printf("new int = %#x\n\n",newint);
system("pause");
return 0;
}
// int main(){
//     printf("%d",PI);
//     system("pause");
//     return 0;

// }