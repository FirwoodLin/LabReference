/*
 * @Descripttion: 
 * @version: 
 * @Author: Fir
 * @Date: 2022-11-14 21:10:31
 * @LastEditors: Fir
 * @LastEditTime: 2022-11-14 23:58:31
 */
#include <stdio.h>
#include <string.h>
// typedef void (*func)(void);
void task0(){
    printf("task0 is called!\n");
}
void task1(){
    printf("task1 is called!\n");
}
void task2(){
    printf("task2 is called!\n");
}
void task3(){
    printf("task3 is called!\n");
}
void task4(){
    printf("task4 is called!\n");
}
void task5(){
    printf("task5 is called!\n");
}
void task6(){
    printf("task6 is called!\n");
}
void task7(){
    printf("task7 is called!\n");
}
void (*tasks[10])(void) = {task0,task1,task2,task3,task4,task5,task6,task7};
void execute(void (*func[])(void),int n){
    for(int i=0;i<n;i++){
        func[i]();
    }
}
void scheduler(){
    int cnt=0;
    // int arr[100]={};
    void (*funcs[100])(void) = {};
    char c;
    while((c=getchar())!='\n'){
        funcs[cnt++] = tasks[c-'0'];
    }
    execute(funcs,cnt);
    // void** ret = (void**)malloc()
}
int main(){
    scheduler();
    return 0;
}