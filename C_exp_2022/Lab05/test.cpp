/*
 * @Descripttion: 
 * @version: 
 * @Author: SE202203林彬彬
 * @Date: 2022-11-01 10:00:43
 * @LastEditors: SE202203林彬彬
 * @LastEditTime: 2022-11-01 10:00:44
 */
/*
 * @Descripttion: 
 * @version: 
 * @Author: SE202203林彬彬
 * @Date: 2022-11-01 09:40:01
 * @LastEditors: SE202203林彬彬
 * @LastEditTime: 2022-11-01 10:00:15
 */
#include <stdio.h>
#include <string.h>

struct Student{
// public:
    char name[100];
    int score;
    Student ()
    {
        memset(name,0,sizeof(name));
        score = 0;
    }
    Student (int name,char s[]){

    }
};
void score_input(){
    int n;
    scanf("%d",&n);
    
}