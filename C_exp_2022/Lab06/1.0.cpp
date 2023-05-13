/*
 * @Descripttion: 
 * @version: 
 * @Author: Fir
 * @Date: 2022-11-07 21:06:59
 * @LastEditors: Fir
 * @LastEditTime: 2022-11-07 21:11:16
 */
#include<stdio.h>
char *strcopy(char *, const char *);
int main(void)
{
	// char *s1, *s2, *s3;
	char s1[1000], s2[1000], *s3;
	printf("Input a string:\n", s2);
	scanf("%s", s2);
	strcopy(s1, s2);
	printf("%s\n", s1);
	printf("Input a string again:\n", s2);
	scanf("%s", s2);
	s3 = strcopy(s1, s2);
	printf("%s\n", s3);
	return 0;
}

/*将字符串s复制给字符串t，并且返回串t的首地址*/
char * strcopy(char *t, const char *s)
{
    char* raw_t =t;
	while(*t++ = *s++);
	return (raw_t);
}
