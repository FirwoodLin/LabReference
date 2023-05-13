/*
 * @Descripttion:
 * @version:
 * @Author: SE202203林彬彬
 * @Date: 2022-11-01 09:40:01
 * @LastEditors: SE202203林彬彬
 * @LastEditTime: 2022-11-02 20:33:05
 */
#include <stdio.h>
#include <string.h>

struct Student
{
    // public:
    char name[1000];
    int score;
    int order;
} stu[1000];
typedef struct Student Stt;
int n;

void score_input()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s%d", stu[i].name, &stu[i].score);
        stu[i].order = i;
    }
    printf("%d records were input!\n", n);
}
void stu_swap(Stt *s1, Stt *s2)
{
    // printf("before:%s %d\n%s %d\n", s1->name, s1->score, s2->name, s2->score);
    Stt t = *s1;
    strcpy(s1->name, s2->name);
    strcpy(s2->name, t.name);
    s1->order = s2->order;
    s2->order = t.order;
    s1->score = s2->score;
    s2->score = t.score;
    // printf("after:%s %d\n%s %d\n", s1->name, s1->score, s2->name, s2->score);
};
void score_sort()
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (stu[j].score < stu[j + 1].score)
                stu_swap(&stu[j + 1], &stu[j]);
        }
    }
    // printf("Reorder finished!\n")
}
void score_print()
{
    score_sort();
    for (int i = 0; i < n; i++)
        printf("%s %d\n", stu[i].name, stu[i].score);
}
int score_find()
{
    score_sort();
    int x;
    scanf("%d", &x);
    int l = 0, r = n - 1;
    while (l < r)
    {
        int mid = (l + r) >>1;
        if (stu[mid].score > x)
            l = mid+1;
        else
            r = mid;
    }
    if (l == r && stu[l].score == x)
        return l;
    else
        return -1;
}
void func()
{
    while (1)
    {
        int temp;
        int exit_flag = 0;
        scanf("%d", &temp);
        switch (temp)
        {
        case 0:
            exit_flag = 1;
            break;
        case 1:
            score_input();
            break;
        case 2:
            score_sort();
            printf("Reorder finished!\n");
            break;
        case 3:
            score_print();
            break;
        case 4:
        ;
            int ret = score_find();
            if (ret == -1)
                printf("not found!\n");
            else
                printf("%s %d\n", stu[ret].name, stu[ret].score);
            break;
        }
        if (exit_flag)
            break;
    }
}

int main()
{
    func();
    return 0;
}