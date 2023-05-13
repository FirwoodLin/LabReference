/*
 * @Descripttion:
 * @version:
 * @Author: SE202203林彬彬
 * @Date: 2022-10-18 11:25:24
 * @LastEditors: SE202203林彬彬
 * @LastEditTime: 2022-10-18 18:50:10
 */
#include <stdio.h>
#include <stdlib.h>
int partial_tax_sum[] = {0, 0, 50, 100 + 50, 150 + 100 + 50, 200 + 150 + 100 + 50};
double tax_rate[] = {0, 0.05, 0.10, 0.15, 0.20, 0.25};
int taxed[] = {0, 1000, 2000, 3000, 4000, 5000};
void func_if()
{
    printf("Running:Func with \"if\"clause:\nPlz input a salary figure:\n");
    int x;
    scanf("%d", &x);
    double tax = 0;
    if (x < 1000)
        tax = 0;
    else if (x < 2000)
        tax = (x - taxed[1]) * tax_rate[1] + partial_tax_sum[1];
    else if (x < 3000)
        tax = (x - taxed[2]) * tax_rate[2] + partial_tax_sum[2];
    else if (x < 4000)
        tax = (x - taxed[3]) * tax_rate[3] + partial_tax_sum[3];
    else if (x < 5000)
        tax = (x - taxed[4]) * tax_rate[4] + partial_tax_sum[4];
    else
        tax = (x - taxed[5]) * tax_rate[5] + partial_tax_sum[5];
    printf("%.2f\n", tax);
}
void func_switch()
{
    printf("Running:Func with \"switch\"clause:\nPlz input a salary figure:\n");
    int x;
    scanf("%d", &x);
    double tax = 0;
    switch (x / 1000)
    {
    case 0:
        tax = 0;
        break;
    case 1:
        tax = (x - taxed[1]) * tax_rate[1] + partial_tax_sum[1];
        break;
    case 2:
        tax = (x - taxed[2]) * tax_rate[2] + partial_tax_sum[2];
        break;
    case 3:
        tax = (x - taxed[3]) * tax_rate[3] + partial_tax_sum[3];
        break;
    case 4:
        tax = (x - taxed[4]) * tax_rate[4] + partial_tax_sum[4];
        break;
    default:
        tax = (x - taxed[5]) * tax_rate[5] + partial_tax_sum[5];
    }
    printf("%.2f\n", tax);
}
int main()
{
    func_if();
    func_switch();
    system("pause");
    return 0;
}