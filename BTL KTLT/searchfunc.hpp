//
//  searchfunc.hpp
//  BTL KTLT

#ifndef searchfunc_hpp
#define searchfunc_hpp

#include <stdio.h>

int SequentialSearch (int a, int array[], int size);
int BinarySearch1 (int a, int array[], int size);
int BinarySearch2 (int a, int array[], int left, int right);
void SequentialSearchString(char *string, char *text);
void BoyerMoore (char* text, char* pattern);

#endif /* searchfunc_hpp */
