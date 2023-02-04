#include "Func.h"


void random_Fill_ar(int* ar, int size, int min, int max){
    srand(time(nullptr));
    for (int i = 0; i < size; i++){
        ar[i] = min + rand() % (max - min + 1);
    }
}

void show_ar(int* ar, int size, char element){
    for (int i = 0; i < size; i++){
        std::cout << ar[i] << element;
    }
    std::cout << std::endl;
}

void swap(int &a, int &b){
    int c = b;
    b = a;
    a = c;
}

void show_ar_task0(int* ar, int size, char element){
	for (int i = 0; i < size; i++){
		std::cout << i+1 << "\t" << ar[i] << element;
	}
	std::cout << std::endl;
}

int showEl(const int* ar, int size, int N, int M){
	for (int j = 0; j < N; j++){
		for (int i = 0; i < M; i++){
        	std::cout << ar[j*N+i] << " ";
    	}
    std::cout << std::endl;
	}
	return 0;
}


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

int min_ind(int* ar, int left_front, int right_front){
	int minn = left_front;
	for (int i = left_front; i < right_front; i++){
		if (ar[i] < ar[minn])
			minn = i;
	}
	return minn;
}
