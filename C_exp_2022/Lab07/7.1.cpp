/*
 * @Descripttion:
 * @version:
 * @Author: Fir
 * @Date: 2022-11-16 20:14:18
 * @LastEditors: Fir
 * @LastEditTime: 2022-11-16 20:24:16
 */
#include <iostream>
using namespace std;
char u[] = "UVWXYZ";
char v[] = "xyz";
struct T
{
	int x;
	char c;
	char *t;
} a[] = {{11, 'A', u}, {100, 'B', v}}, *p = a;
int main()
{
	// cout << ((++p)->x) << endl;
	// cout << (p++,p->c) << endl;
	// cout << (*p++->t,*p->t) << endl;
	// cout << (*(++p)->t) << endl;
	// cout << (*++p->t) << endl;
	cout << (++*p->t) << endl;
	return 0;
}
