/*
 * @Descripttion: 
 * @version: 
 * @Author: Fir
 * @Date: 2022-11-22 11:47:53
 * @LastEditors: Fir
 * @LastEditTime: 2022-11-22 11:50:03
 */
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	char ch;
	FILE *fp;
	if (argc != 2)
	{
		printf("Arguments error!\n");
		exit(-1);
	}
	if ((fp = freopen(argv[1], "r",stdin)) == NULL)
	// if ((fp = fopen(argv[1], "r")) == NULL)
	{ /* fp 指向 filename */
		printf("Can't open %s file!\n", argv[1]);
		exit(-1);
	}

	while ((ch = getchar()) != EOF) /* 从filename中读字符 */
	// while (ch = fgetc(fp) != EOF) /* 从filename中读字符 */
		putchar(ch);			  /* 向显示器中写字符 */
	fclose(fp);					  /* 关闭filename */
	return 0;
}
