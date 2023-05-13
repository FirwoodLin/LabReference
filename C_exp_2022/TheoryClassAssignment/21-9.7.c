/*
 * @Descripttion:
 * @version:
 * @Author: Fir
 * @Date: 2022-12-11 21:45:27
 * @LastEditors: Fir
 * @LastEditTime: 2022-12-11 21:51:27
 */
#include <stdio.h>
typedef struct student stu;
struct student
{
    int num;
    char name[12];
    double score;
};
struct student s[3];
int main()
{
    stu* p=s;
    for(int i=0;i<3;i++){
        scanf("%d%s%d",&s[i].num,s[i].name,&s[i].score);
    }
    for(int i=0;i<3;i++){
        printf("%d %s %d\n",s[i].num,s[i].name,s[i].score);
    }
    for(int i=0;i<3;i++){
        printf("%d %s %d\n",(p+i)->num,(p+i)->name,(p+i)->score);
    }
    return 0;
}