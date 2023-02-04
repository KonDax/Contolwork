#include <iostream>
#include "array.h"

int get_max(const int* ar, int size){
	static int depth_rec = 0;
	depth_rec++;
	if (size == 1){
		std::cout << "Глубина рекурсииg get_max: " << depth_rec << std::endl;
		return ar[0];
	}
	int maxx = get_max(ar, --size);
	if (ar[size-1] > maxx)
		return ar[size-1];
	return maxx;
}

int get_min(const int* ar, int size){
	static int depth_rec = 0;
	depth_rec++;
	if (size == 1){
		std::cout << "Глубина рекурсии get_min: " << depth_rec << std::endl;
		return ar[0];
	}
	int minn = get_min(ar, --size);
	if (ar[size-1] < minn)
		return ar[size-1];
	return minn;
}

int main(){	

	int ar[100];
	random_Fill_ar(ar, 100, 100, 150);
	show_ar(ar, 100);
	int maxx = get_max(ar, 100);
	int minn = get_min(ar, 100);
	std::cout << "Максимальный элемент массива: " << maxx << std::endl;
	std::cout << "Минимальный элемент массива: " << minn << std::endl;

	return 0;
}