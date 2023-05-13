/*
 * @Descripttion: 
 * @version: 
 * @Author: SE202203林彬彬
 * @Date: 2022-10-25 11:44:05
 * @LastEditors: SE202203林彬彬
 * @LastEditTime: 2022-10-25 12:00:17
 */
#include <iostream>
#include <ctime>
#include <random>
#include <cstdlib>
using namespace std;

int main(){
        unsigned int seed = time(NULL);
        srand(seed);
    for(int i=0;i<10;i++){
        int r = 3+ rand()%6;
        printf("%d\n",r);
    }
    printf("0");
    return 0;
}