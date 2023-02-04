#include <iostream>
#include "Func.h"
#include "sorts.h"

void task_0(){
	int size = 1000;
	int ar[size];
	random_Fill_ar(ar, size, 0, 200);
	show_ar_task0(ar, size, '\n');
}

void task_1(){
	int size = 100;
	int ar[size];
	random_Fill_ar(ar, size, 100, 150);
	count_sort(ar, size, 100, 150);
	showEl(ar, size);

	int maxx_period = 1;
	int maxx_period_el = ar[0];
	int minn_period = size;
	int minn_period_el = ar[0];
	for (int i = 0, j = 0; i < size; i+=j){
		j = i;
		while (ar[j] == ar[j+1])
			j++;
		j++;
		if (j-i > maxx_period){
			maxx_period = j-i;
			maxx_period_el = ar[j-1];
		}
		if (j-i < minn_period){
			minn_period = j-i;
			minn_period_el = ar[j-1];
		}
	}

	std::cout << "Самый частый элемент: " << maxx_period_el << "\t" << "Частота " << maxx_period << std::endl;
	std::cout << "Самый редкий элемент: " << minn_period_el << "\t" << "Частота " << minn_period << std::endl;
}

void task_2(){
	int ar[100];
	random_Fill_ar(ar, 100, 0, 150);
	show_ar(ar, 100);
	int maxx = get_max(ar, 100);
	int minn = get_min(ar, 100);
	std::cout << "Максимальный элемент массива: " << maxx << std::endl;
	std::cout << "Минимальный элемент массива: " << minn << std::endl;
}

int main(){	
	task_0();
	task_1();
	task_2();

	return 0;
}