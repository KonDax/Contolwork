#include "sorts.h"

void bubble_sort(int *ar, int size){
    for (int j = 1; j < size; j++){
        for(int i = 0; i < size - j; i++){
            if (ar[i] > ar[i + 1])
                swap(ar[i], ar[i + 1]);
        }
    }
}

void selection_sort(int* ar, int size){
	for (int i = 0; i < size; i++){
		swap(ar[min_ind(ar, i, size)], ar[i]);
	}
}

void insertion_sort(int *ar, int size){
	int key, k;
	for (int i = 1; i < size; i++){
		key = ar[i];
		k = i;
		for (int j = i - 1; ar[j] < key && j >= 0; j--, k--){
			ar[k] = ar[j];
		}
		ar[k] = key;
	}
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
