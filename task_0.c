#include <iostream>
#include "array.h"

void show_ar_task0(int* ar, int size, char element){
	for (int i = 0; i < size; i++){
		std::cout << i+1 << "\t" << ar[i] << element;
	}
	std::cout << std::endl;
}

int main(){	
	int size = 1000;
	int ar[size];
	random_Fill_ar(ar, size, 0, 200);
	show_ar_task0(ar, size, '\n');

	return 0;
}