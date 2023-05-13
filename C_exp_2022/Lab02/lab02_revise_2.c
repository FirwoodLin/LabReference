/*
 * @Descripttion: 
 * @version: 
 * @Author: SE202203林彬彬
 * @Date: 2022-10-18 09:53:27
 * @LastEditors: SE202203林彬彬
 * @LastEditTime: 2022-10-18 10:20:23
 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, x, k, flag = 0;
	printf("本程序判断合数，请输入大于1的整数，以Ctrl+Z结束\n");
	while (scanf("%d", &x) != EOF)
	{
		flag = 0;
        i=2,k=x>>1;
        do{
            if(i>k)
                break;
            if (!(x % i))
				flag = 1;
            i+=1;
        }while(i <= k && flag != 1);
		if (flag == 1)
			printf("%d是合数", x);
		else
			printf("%d不是合数", x);
	}
    system("pause");
	return 0;
}