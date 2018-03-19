//
//  createdata.cpp
//  BTL KTLT

#include "createdata.hpp"
#include <stdlib.h>
#include <time.h>

using namespace std;

// Tạo mảng ngẫu nhiên có sắp xếp:
void RandomSortedArray(int *&array, int size) {
    int i,j,temp;
    array=new int[size];
    srand(time(NULL));
    for (i=0; i<size; i++) {
        array[i]=rand()%31; // set range: 0 to 30.
    }
    for (i=0; i<size; i++) {
        for (j=i+1; j<size; j++) {
            if (array[i]>array[j]) {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
}

// Đọc file có chứa string:
void ReadFile (char* string, int length) {
    FILE* file;
    file=fopen("/Users/Nam/Documents/Xcode Documents/BTL KTLT/BTL KTLT/String.txt", "r");
    fgets(string, length, file);
}
