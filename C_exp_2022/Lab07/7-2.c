#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define name_len 40
struct Node
{
    // int nxt;
    struct Node *nxt;
    // struct Node *lst;
    int id, english, math, physics, c_design, sum;
    double avg;
    char name[name_len];
};
typedef struct Node Student;
Student *head = NULL;
// struct Node stus[100];
void add_node()
{
    Student *p = NULL, *pr = head;
    Student data;
    p = (Student *)malloc(sizeof(Student));
    if (head == NULL)
    {
        head = p;
    }
    else
    {
        while (pr->nxt != NULL)
            // 找到数组链表末尾
            pr = pr->nxt;
        pr->nxt = p;
    }
    scanf("%d%s%d%d%d%d",
          &p->id, p->name, &p->english, &p->math, &p->physics, &p->c_design);
    p->sum = p->c_design + p->english + p->math + p->physics;
    p->avg = (p->sum) / 4.0;
    p->nxt = NULL;
}
void input()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        add_node();
    }
    printf("完成了%d位同学的成绩输入。\n", n);
}
void output()
{
    Student *p = head;
    // int cnt =0;
    while (p != NULL)
    {
        printf("%d %s %d %d %d %d\n",
               p->id, p->name, p->english, p->math, p->physics, p->c_design);
        p = p->nxt;
        // ++cnt;
    }
}
void modify()
{
    int id, pos;
    scanf("%d%d", &id, &pos);
    Student *p = head;
    while (p != NULL)
    {
        if (p->id == id)
        {
            if (pos == 0)
                break;
            int dest;
            scanf("%d", &dest);
            switch (pos)
            {
            case 1:
                p->english = dest;
                break;
            case 2:
                p->math = dest;
                break;
            case 3:
                p->physics = dest;
                break;
            case 4:
                p->c_design = dest;
                break;
            }
            p->sum = p->c_design + p->english + p->math + p->physics;
            p->avg = p->sum / 4.0;
            break;
        }
        p = p->nxt;
    }
    printf("%d %s %d %d %d %d", p->id, p->name, p->english, p->math, p->physics, p->c_design);
}
void output_avg()
{
    Student *p = head;
    // int cnt =0;
    while (p != NULL)
    {
        printf("%d %s %.2f\n",
               p->id, p->name, p->avg);
        p = p->nxt;
        // ++cnt;
    }
}
void output_avg_sum()
{
    Student *p = head;
    // int cnt =0;
    while (p != NULL)
    {
        printf("%d %s %d %.2f\n",
               p->id, p->name, p->sum, p->avg);
        p = p->nxt;
        // ++cnt;
    }
}
void exitmy()
{
    // printf("0");
}
// 1 2 3
void old_acs_sort()
{
    struct Node *i = head, *j;
    for (i = head; i->nxt != NULL; i = i->nxt)
    {
        // struct Node* lst=i;
        for (j = i; j->nxt != NULL; j = j->nxt)
        {
            if (j->avg > j->nxt->avg)
            {
                struct Node t = *j;
                t.nxt = j->nxt->nxt;

                j->nxt->nxt = j->nxt;
                *j = *j->nxt;
                *j->nxt = t;
            }
            // lst=j;
        }
    }
    output_avg();
}
// void swap(struct Node *a, struct Node *b)
// {
//     struct Node * t = b->nxt;
//     b->nxt = a;
//     a->nxt = t;
//     return b;
// }
void acs_sort()
{
    struct Node *p1, *p2, *tail;
    tail = NULL;
    while ((head->nxt->nxt) != tail)
    {
        p1 = head;
        p2 = head->nxt;
        while (p2->nxt != tail)
        {
            if ((p2->avg) > (p2->nxt->avg))
            {
                p1->nxt = p2->nxt;
                p2->nxt = p2->nxt->nxt;
                p1->nxt->nxt = p2;
                p2 = p1->nxt;
            }
            p2 = p2->nxt;
            p1 = p1->nxt;
        }
        tail = p2;
    }
}
void (*funcs[10])(void) = {exitmy, input, output, modify, output_avg_sum, output_avg_sum, acs_sort, exitmy};
int main()
{
    int choice;
    scanf("%d", &choice);
    while (choice != 0)
    {
        funcs[choice]();
        scanf("%d", &choice);
    }
    funcs[choice]();
    return 0;
}