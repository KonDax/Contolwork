#include "array.h"

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
