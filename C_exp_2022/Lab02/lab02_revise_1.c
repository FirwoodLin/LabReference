/*
 * @Descripttion: 
 * @version: 
 * @Author: SE202203林彬彬
 * @Date: 2022-10-18 09:49:36
 * @LastEditors: SE202203林彬彬
 * @LastEditTime: 2022-10-18 10:28:09
 */
#include <stdio.h>
int main()
{
	int i, x, k, flag = 0;
	printf("本程序判断合数，请输入大于1的整数，以Ctrl+Z结束\n");
	while (scanf("%d", &x) != EOF)
	{
		flag = 0;
		for (i = 2, k = x >> 1; i <= k && flag != 1; i++)
			if (!(x % i))
			{
				flag = 1;
			}
		if (flag == 1)
			printf("%d是合数", x);
		else
			printf("%d不是合数", x);
	}
	return 0;
}