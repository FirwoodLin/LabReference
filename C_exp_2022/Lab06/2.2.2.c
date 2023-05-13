/*
 * @Descripttion:
 * @version:
 * @Author: Fir
 * @Date: 2022-11-08 11:22:16
 * @LastEditors: Fir
 * @LastEditTime: 2022-11-08 11:57:56
 */
#include <stdio.h>
#include <string.h>
int main(void)
{
    char *(*p[10])(char *, const char *) = {NULL, strcpy, strcat, strtok};
    char a[80], b[80], *result;
    int choice;
    while (1)
    {
        do
        {
            printf("\t\t1 copy string.\n");
            printf("\t\t2 connect string.\n");
            printf("\t\t3 parse string.\n");
            printf("\t\t4 exit.\n");
            printf("\t\tinput a number (1-4) please.\n");
            scanf("%d", &choice);
        } while (choice < 1 || choice > 4);
        getchar();
        printf("input the first string please!\n");
        gets(a);
        printf("input the second string please!\n");
        gets(b);
        result = p[choice](a, b);
        printf("the result is %s\n", result);
    }
down:
    return 0;
}
