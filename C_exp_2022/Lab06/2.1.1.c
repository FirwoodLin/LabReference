/*
 * @Descripttion:
 * @version:
 * @Author: Fir
 * @Date: 2022-11-08 10:22:25
 * @LastEditors: Fir
 * @LastEditTime: 2022-11-08 10:38:13
 */
#include <stdio.h>
#include <stdlib.h>
// #include<_________>
#include <string.h>
#define N 4
/*对指针数组s指向的size个字符串进行升序排序*/
void strsort(char *s[], int size)
{
    char *temp;
    // char *temp;
    int i, j;
    for (i = 0; i < size - 1; i++)
        for (j = 0; j < size - i - 1; j++)
            if (strcmp(s[j+1],s[j])<0)
            {
                temp = s[j];
                s[j] = s[j+1];
                s[j + 1] = temp;
            }
}

int main()
{
    int i;
    char *s[N], t[50];
    for (i = 0; i < N; i++)
    {
        gets(t);
        s[i] = (char *)malloc(strlen(t) + 1);
        // strcpy(_______);
        strcpy(s[i], t);
    }
    // strsort(s,N);
    strsort(s, N);
    for (i = 0; i < N; i++)
    {
        puts(s[i]);
        free(s[i]);
    }
    return 0;
}
