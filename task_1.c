#include <iostream>
#include "array.h"

// null_ar - Массив где значения == количеству елементов индекса в массиве ar, как в сортировке подсчётом
void create_ar_with_count_of_num(int* ar, int* null_ar, int size){
    for (int i = 0; i < size; i++){
        null_ar[ar[i]]++;
    }
}

int showEl(const int* ar, int size, int N = 10, int M = 10){
	for (int j = 0; j < N; j++){
		for (int i = 0; i < M; i++){
        	std::cout << ar[j*N+i] << " ";
    	}
    std::cout << std::endl;
	}
	return 0;
}


int get_max(const int* ar, int size){
	if (size == 1)
		return ar[0];
	int maxx = get_max(ar, --size);
	if (ar[size-1] > maxx)
		return ar[size-1];
	return maxx;
}

int get_min(const int* ar, int size, int left_front){
	if (size == left_front+1)
		return ar[left_front];
	int minn = get_min(ar, --size, left_front);
	if (ar[size-1] < minn)
		return ar[size-1];
	return minn;
}

int get_ind_el(int* ar, int size, int el){
    if (size == 0)
        return -1;
    if (ar[size-1] == el)
        return size-1;
    return get_ind_el(ar, --size, el);
}

void count_sort(int *ar, int size, int min, int max){
	int null_ar[max];
	for (int i = min; i <= max; i++){
		null_ar[i] = 0;
	}

	for (int i = 0; i < size; i++){
        null_ar[ar[i]]++;
    }

	int k = 0;
	for (int i = min; i <= max; i++){
		for (int j = k; j < k + null_ar[i]; j++){
			ar[j] = i;
		}
		k += null_ar[i];
	}
}


int main(){	
	int size = 100;
	int ar[size];
	random_Fill_ar(ar, size, 100, 150);
	count_sort(ar, size, 100, 150);
	showEl(ar, size);

	int null_ar[150];
	for (int i = 0; i < 150; i++){
		null_ar[i] = 0;
	}
	create_ar_with_count_of_num(ar, null_ar, size);

	std::cout << "Самый частый элемент: " << get_ind_el(null_ar, 150, get_max(null_ar, 150)) << "\t" << "Частота " << get_max(null_ar, 150) << std::endl;
	std::cout << "Самый редкий элемент: " <<  get_ind_el(null_ar, 150, get_min(null_ar, 150, 100)) << "\t" << "Частота " << get_min(null_ar, 150, 100) << std::endl;

	return 0;
}