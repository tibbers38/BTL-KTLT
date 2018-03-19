//
//  main.cpp
//  BTL KTLT

#include <stdio.h>
#include <iostream>
#include "searchfunc.hpp"
#include "createdata.hpp"

#define MAX_TEXT_LENGTH 1000
#define MAX_STRING_LENGTH 50

using namespace std;

int main(int argc, const char * argv[]) {
    int size=12;
    int *array;
    char text[MAX_TEXT_LENGTH],pattern[MAX_TEXT_LENGTH];
//    RandomSortedArray(array, size);
//    printf("%d ",BinarySearch2(13, array, 0, size));
//    ReadFile(text, MAX_TEXT_LENGTH);
//    char string[MAX_STRING_LENGTH];
//    printf("Nhap chuoi can test: ");
//    fgets(string, BUFSIZ, stdin);
//    SequentialSearchString(string, text);
    BoyerMoore(text, pattern);
    
}
