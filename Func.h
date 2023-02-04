#ifndef _Func_h_
#define _Func_h_

#include <iostream>

void random_Fill_ar(int*, int, int = 0, int = 255);
void show_ar(int*, int, char = ' ');
void swap(int&, int&);
void show_ar_task0(int*, int, char);
int showEl(const int*, int, int = 10, int = 10);
int get_max(const int*, int);
int get_min(const int*, int);
int min_ind(int*, int, int);

#endif