/*
 * @Descripttion:
 * @version:
 * @Author: Fir
 * @Date: 2022-11-23 18:10:27
 * @LastEditors: Fir
 * @LastEditTime: 2022-11-23 18:46:37
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXN 1000
int main()
{
    // char filepath[] = "experiment/src/step8/source.txt";
    char filepath[] = "source.txt";
    FILE *fp = fopen(filepath, "r");
    char readin[MAXN] = {};
    char output[MAXN]={};
    // char replacement[MAXN]={};
    char x[MAXN] = {}, y[MAXN] = {};
    // gets(replacement);
    scanf("%s%s", x, y);
    int cnt = 0;
    char *p = NULL;
    while (fgets(readin, MAXN, fp) != NULL)
    {
        p = readin; //当前在输出的位置
        char *end = p + strlen(readin) - 1;
        char *find = NULL;
        while ((find = strstr(p, x)) != NULL)
        {
            for (; p < find && p <= end; p++)
            {
                // putchar(*p);
                sprintf(output+strlen(output),"%c",*p);
            }
            // printf("%s", y);
                sprintf(output+strlen(output),"%s",y);
            cnt++;
            p += strlen(x);
        }
        // printf("%s", p);
                sprintf(output+strlen(output),"%s",p);
        memset(readin, 0, MAXN * sizeof(char));
    }
    printf("%d\n", cnt);
    printf("%s",output);
    fclose(fp);
}